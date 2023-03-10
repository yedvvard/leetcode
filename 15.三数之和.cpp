/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>

using std::string;
using std::vector;
using std::unordered_map;
using std::sort;
// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //double pointer
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;

        for(int i = 0; i < nums.size(); i ++){
            if(nums[i] > 0) return result;
            if(i > 0 && (nums[i] == nums[i-1])) continue;
            int left = i + 1;
            int right = nums.size() - 1;
            while(right > left){
                if((nums[i] + nums[left] + nums[right]) > 0){
                    right --;
                }else if((nums[i] + nums[left] + nums[right]) < 0) {
                    left ++;
                }else{
                    result.push_back(vector<int>{nums[i], nums[left], nums[right]});
                    while(left < right && nums[right] == nums[right-1]) right --;
                    while(left < right && nums[left] == nums[left+1]) left ++; //mistake: left - 1
                    right --;
                    left ++;
                }
            }
        }
        return result;
    }
};
// @lc code=end

