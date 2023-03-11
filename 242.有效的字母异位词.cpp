/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 */
#include <string>
#include <unordered_map>
using std::string;
using std::unordered_map;

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        // using unordered_map to solve this problem is complex, using simple list
        // unordered_map<char, int> record;
        // for(string::iterator iter = s.begin(); iter != s.end(); ++iter){
        //     record[*iter] ++;
        // }
        // for(string::iterator iter = t.begin(); iter != s.end(); ++iter){
        //     record[*iter] --;
        // }

        // for (auto iter = record.begin(); iter != record.end(); ++iter) {
        //     if(iter->second != 0) return false;
        // }
        // return true;

        int record[26] = {0};
        for(string::iterator iter = s.begin(); iter != s.end(); ++iter){
            record[*iter - 'a'] ++;
        }
        for(string::iterator iter = t.begin(); iter != t.end(); ++iter){
            record[*iter - 'a'] --;
        }

        for (auto i: record){
            if(i != 0){
                return false;
            }
        }
        return true;

    }
};
// @lc code=end

