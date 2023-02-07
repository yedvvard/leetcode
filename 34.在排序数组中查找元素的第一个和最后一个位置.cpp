/*
 * @lc app=leetcode.cn id=34 lang=cpp
 *
 * [34] 在排序数组中查找元素的第一个和最后一个位置
 */

// @lc code=start
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int leftBorder = getLeftBorder(nums, target);
        int rightBorder = getRightBorder(nums, target);
        // 情况一
        if (leftBorder == -2 || rightBorder == -2) return {-1, -1};
        // 情况三
        if (rightBorder - leftBorder > 1) return {leftBorder + 1, rightBorder - 1};
        // 情况二
        return {-1, -1};
    }

private:
    int getRightBorder(vector<int>& nums, int target){
        int left = 0;
        int right = nums.size();
        int middle = right / 2;
        int rightBorder = -2;
        while(right > left){
            middle = (left + right) / 2;
            if(nums[middle] > target){
                right = middle;
            } else {
                left = middle + 1;
                rightBorder = left;
            }
        }
        return rightBorder;
    }

    int getLeftBorder(vector<int>& nums, int target){
        int left = 0;
        int right = nums.size();
        int middle = right / 2;
        int leftBorder = -2;
        while(right > left){
            middle = (left + right) / 2;
            if(nums[middle] >= target){
                right = middle;
                leftBorder = right - 1;
            } else {
                left = middle + 1;
            }
        }
        return leftBorder;
    }
};
// @lc code=end

