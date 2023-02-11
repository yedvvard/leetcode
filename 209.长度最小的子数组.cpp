/*
 * @lc app=leetcode.cn id=209 lang=cpp
 *
 * [209] 长度最小的子数组
 */

// @lc code=start
class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int size = nums.size();
        int start = 0;
        int sum = 0;
        int result = INT32_MAX;
        int len = 0;
        for (int end = 0; end < size; end ++){
            sum += nums[end];
            
            while(sum >= s){
                len = (end - start + 1);
                result = len < result ? len : result;
                sum -= nums[start ++];
            }
        }
        return result == INT32_MAX ? 0 : result;
    }
};

// @lc code=end

