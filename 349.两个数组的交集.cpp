/*
 * @lc app=leetcode.cn id=349 lang=cpp
 *
 * [349] 两个数组的交集
 */

// @lc code=start
#include<vector>
#include<unordered_map>

using std::unordered_map;
using std::vector;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int, bool> record;
        for(auto iter : nums1){
            // bool flag = record.find(iter)->second;
            // if(!flag)
            if(record.find(iter) == record.end()){
                record.insert(pair<int, bool>(iter,true));
            }
        }
        for(auto iter : nums2){
            if(record.find(iter) != record.end()){
                record.erase(iter);
                ans.push_back(iter);
            }
        }
        return ans;
    }
};
// @lc code=end

