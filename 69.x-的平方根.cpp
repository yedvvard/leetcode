/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根 
 */

// @lc code=start
class Solution {

public:
    int mySqrt(int x) {
        int left = 0;
        int right = x;
        int ans = -2;
        long long square = 0;
        while(right >= left){
            int middle = (left + right) / 2;
            square = (long long)middle * middle;
            if(square <= x){
                ans = middle;
                left = middle + 1;
            }else{
                right = middle - 1;
            }
        }
        return ans;
    }
};
// @lc code=end

