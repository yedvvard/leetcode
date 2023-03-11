/*
 * @lc app=leetcode.cn id=202 lang=cpp
 *
 * [202] 快乐数
 */
#include<unordered_set>
using std::unordered_set;
// @lc code=start

class Solution {
public:
    int getSum(int n){
        int sum = 0;
        while(n){
            sum += (n % 10) * (n % 10);
            n /= 10; // "/=" not "/"
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> record;
        while(1){
            int sum = getSum(n);
            if(sum == 1){
                return true;
            }
            if(record.find(sum) != record.end()){
                return false;
            } else {
                record.insert(sum);
            }
            n = sum;
        }
    }
};
// @lc code=end

