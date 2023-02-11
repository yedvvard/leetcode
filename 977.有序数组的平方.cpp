/*
 * @lc app=leetcode.cn id=977 lang=cpp
 *
 * [977] 有序数组的平方
 */

// @lc code=start
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result(nums.size(), 0);
        int left = 0;
        int right = nums.size() - 1;
        int idx = right;
        while(right >= left){
            if(nums[right] * nums[right] > nums[left] * nums[left]){
                result[idx --] = nums[right] * nums[right];
                right --;
            } else {
                result[idx --] = nums[left] * nums[left];
                left ++;
            }
        }
        return result;
    }
};
// @lc code=end

