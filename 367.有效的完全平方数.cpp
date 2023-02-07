/*
 * @lc app=leetcode.cn id=367 lang=cpp
 *
 * [367] 有效的完全平方数
 */

// @lc code=start
class Solution {
public:
    bool isPerfectSquare(int num) {
        int left = 0;
        int right = num;
        int ans = -2;
        while(right >= left){
            int middle = (left + right) / 2;
            if((long long) middle * middle <= num){
                ans = middle;
                left = middle + 1;
            } else {
                right = middle - 1;
            }
        }
        if(ans * ans == num){
            return true;
        } else {
            return false;
        }                 
    }
};
// @lc code=end

