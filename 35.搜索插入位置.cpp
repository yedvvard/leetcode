/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();
        int middle = (left + right) / 2;
        if (target < nums[0]){
            return 0;
        }
        if (target > nums[nums.size() - 1]){
            return nums.size();
        }
        while(right > left){
            middle = (left + right) / 2;
            if(nums[middle] > target){
                right = middle;
            }else if(nums[middle] < target){
                left = middle + 1;
            }else{
                return middle;
            }
        }
        return right;
        
        
    }
};
// @lc code=end

