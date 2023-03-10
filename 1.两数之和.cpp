/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */
#include<vector>
#include<unordered_map>
using std::unordered_map;
using std::vector;
using std::pair;
// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> record;
        for(int i = 0; i < nums.size(); i ++){
            auto iter = record.find(target - nums[i]);
            if(iter != record.end()){
                return {iter->second, i};
            } else{
                record.insert(pair<int,int>(nums[i],i));
            }
        }
        return {};
    }
};
// @lc code=end

