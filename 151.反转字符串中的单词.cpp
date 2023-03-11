/*
 * @lc app=leetcode.cn id=151 lang=cpp
 *
 * [151] 反转字符串中的单词
 */
#include<string>
#include<vector>
#include<algorithm>
using std::vector;
using std::string;
// @lc code=start
class Solution {
public:
    string reverseWords(string s) {
        int low = 0;
        for(int fast = 0; fast < s.size(); fast ++){
            if(s[fast]==' ' && s[fast - 1] == ' '){
                continue;
            } else {
                s[low] = s[fast];
                low ++;
            }
        }

        s.resize(low);

        reverse(s.begin(), s.end());

        int right,left;
        for(int left = 0, right = 0; right < s.size(); right ++){
            if (s[right] != ' '){
                continue;
            }else{
                reverse(s.begin() + left, s.begin() + right);
                left = right + 1;
            }
        }

        // reverse(s.begin() + left, s.end());
        return s;
    }
};
// @lc code=end

