/*
 * @lc app=leetcode.cn id=344 lang=cpp
 *
 * [344] 反转字符串
 */
#include<string>
#include<vector>
using std::vector;
using std::string;
// @lc code=start
class Solution {
public:
    void reverseString(vector<char>& s) {
        int len = s.size() - 1;
        for(int i = 0; i < s.size() / 2; i ++){
            char tmp = s[i];
            s[i] = s[len - i];
            s[len - i] = tmp;
            // swap(s[i],s[len-i]);
        }
    }
};

// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//         for (int i = 0, j = s.size() - 1; i < s.size()/2; i++, j--) {
//             swap(s[i],s[j]);
//         }
//     }
// };
// @lc code=end

