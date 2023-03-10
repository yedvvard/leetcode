/*
 * @lc app=leetcode.cn id=383 lang=cpp
 *
 * [383] 赎金信
 */
#include<vector>
#include<unordered_map>
#include<string>
using std::string;
using std::vector;
using std::unordered_map;
// @lc code=start
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int record[26] = {0};
        for(int i = 0; i < magazine.size(); i++){
            record[magazine[i] - 'a'] += 1;
        }
        for(int i = 0; i < ransomNote.size(); i++){
            record[ransomNote[i] - 'a'] -= 1;
        }
        for(auto i : record){
            if(i < 0){
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

