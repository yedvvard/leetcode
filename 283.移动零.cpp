/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow = 0;
        int size = nums.size();
        for(int fast = 0; fast < size; fast ++){
            if(nums[fast] != 0){
                nums[slow ++] = nums[fast];
            }
        }
        for(int i = slow; i < size; i ++){
            nums[i] = 0;
        }
    }
};
// @lc code=end

