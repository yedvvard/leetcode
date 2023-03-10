/*
 * @lc app=leetcode.cn id=454 lang=cpp
 *
 * [454] 四数相加 II
 */
#include<vector>
#include<unordered_map>
using std::vector;
using std::unordered_map;
// @lc code=start
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int, int> record;
        for(int a : nums1){
            for(int b : nums2){
                record[a + b] ++;
            }
        }

        int cnt = 0;
        for(int c : nums3){
            for(int d : nums4){
                auto iter = record.find(-(c + d));
                if(iter != record.end()){
                    cnt += iter->second;
                }
            }
        }
        return cnt;
    }
};
// @lc code=end

