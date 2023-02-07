/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        return DoublePointer_Remove(nums, val);
    }
// 暴力for循环，覆盖
    int ViolentForLoop_Remove(vector<int>& nums, int val){
        int size = nums.size();
        for (int i = 0; i < size; i ++){
            if (nums[i] == val) {
                for (int j = i; j < size - 1; j ++) {
                    nums[j] = nums[j + 1];
                }
                i --;
                size --;
            }
        }
        return size;
    }
// 双指针法
    int DoublePointer_Remove(vector<int>& nums, int val){
        int size = nums.size();
        int slowptr = 0;
        for(int fastptr = 0; fastptr < size; fastptr ++){
            if (nums[fastptr] != val){
                nums[slowptr ++] = nums[fastptr];
            }
        }
        return slowptr;
    }
};

// @lc code=end

