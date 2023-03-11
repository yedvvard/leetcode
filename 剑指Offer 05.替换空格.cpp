#include<string>
using std::string;
class Solution {
public:
    string replaceSpace(string s) {
        int sz_old = s.size();
        int count = 0;
        for(auto i : s){
            if(i == ' ') count ++;
        }

        s.resize(s.size() + 2*count);
        int sz_new = s.size();

        for(int f = sz_old - 1, l = sz_new - 1; f < l; f --, l--){
            if(s[f] == ' '){
                s[l] = '0';
                s[l-1] = '2';
                s[l-2] = '%';
                l -= 2;
            } else {
                s[l] = s[f];
            }
        }
        return s;
    }
};