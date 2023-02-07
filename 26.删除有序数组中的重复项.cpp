/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        int slowidx = 0;
        int target = nums[0];
        for (int fastidx = 0; fastidx < size; fastidx ++){
            if( nums[fastidx] != target){
                nums[++slowidx] = nums[fastidx];
                target = nums[fastidx];
            }
        }
        return slowidx + 1;
    }
};
// @lc code=end

