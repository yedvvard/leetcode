/*
 * @lc app=leetcode.cn id=18 lang=cpp
 *
 * [18] 四数之和
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
// mine
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        for(int k = 0; k < nums.size(); k ++){
            if(nums[k] > 0 && nums[k] > target) break; //剪枝
            if(k > 0 && (nums[k] == nums[k-1])) continue; //去重

            for(int i = k + 1; i < nums.size(); i ++){
                // if(nums[i] > 0) break; 错误的！！！
                if(nums[k] + nums[i] > target && nums[k] + nums[i] >= 0) break;
                if(i > k + 1 && (nums[i] == nums[i-1])) continue;
                int left = i + 1;
                int right = nums.size() - 1;
                while(right > left){
                    if(((long)nums[k] + nums[i] + nums[left] + nums[right]) > target){
                        right --;
                    }else if(((long)nums[k] + nums[i] + nums[left] + nums[right]) < target) {
                        left ++;
                    }else{
                        result.push_back(vector<int>{nums[k],nums[i], nums[left], nums[right]});
                        while(left < right && nums[right] == nums[right-1]) right --;
                        while(left < right && nums[left] == nums[left+1]) left ++;
                        right --;
                        left ++;
                    }
                }
            }
        
        }
        return result;
    }
};

// //ChatGPT
// class Solution {
// public:
//     vector<vector<int>> fourSum(vector<int>& nums, int target) {
//         sort(nums.begin(), nums.end());
//         vector<vector<int>> result;
//         for(int k = 0; k < nums.size(); k ++){
//             if(nums[k] > 0 && nums[k] > target) break; //剪枝
//             if(k > 0 && (nums[k] == nums[k-1])) continue; //去重

//             for(int i = k + 1; i < nums.size(); i ++){
//                 if(nums[i] > 0) break;
//                 if(i > k + 1 && (nums[i] == nums[i-1])) continue; //修改去重条件
//                 int left = i + 1;
//                 int right = nums.size() - 1;
//                 while(right > left){
//                     if((nums[k] + nums[i] + nums[left] + nums[right]) > target){
//                         right --;
//                     }else if((nums[k] + nums[i] + nums[left] + nums[right]) < target) {
//                         left ++;
//                     }else{
//                         result.push_back(vector<int>{nums[k],nums[i], nums[left], nums[right]});
//                         while(left < right && nums[right] == nums[right-1]) right --;
//                         while(left < right && nums[left] == nums[left+1]) left ++;
//                         right --;
//                         left ++;
//                     }
//                 }
//             }
        
//         }
//         return result;
//     }
// };

// //carl
// class Solution {
// public:
//     vector<vector<int>> fourSum(vector<int>& nums, int target) {
//         vector<vector<int>> result;
//         sort(nums.begin(), nums.end());
//         for (int k = 0; k < nums.size(); k++) {
//             // 剪枝处理
//             if (nums[k] > target && nums[k] >= 0) {
//             	break; // 这里使用break，统一通过最后的return返回
//             }
//             // 对nums[k]去重
//             if (k > 0 && nums[k] == nums[k - 1]) {
//                 continue;
//             }
//             for (int i = k + 1; i < nums.size(); i++) {
//                 // 2级剪枝处理
//                 if (nums[k] + nums[i] > target && nums[k] + nums[i] >= 0) {
//                     break;
//                 }

//                 // 对nums[i]去重
//                 if (i > k + 1 && nums[i] == nums[i - 1]) {
//                     continue;
//                 }
//                 int left = i + 1;
//                 int right = nums.size() - 1;
//                 while (right > left) {
//                     // nums[k] + nums[i] + nums[left] + nums[right] > target 会溢出
//                     if ((long) nums[k] + nums[i] + nums[left] + nums[right] > target) {
//                         right--;
//                     // nums[k] + nums[i] + nums[left] + nums[right] < target 会溢出
//                     } else if ((long) nums[k] + nums[i] + nums[left] + nums[right]  < target) {
//                         left++;
//                     } else {
//                         result.push_back(vector<int>{nums[k], nums[i], nums[left], nums[right]});
//                         // 对nums[left]和nums[right]去重
//                         while (right > left && nums[right] == nums[right - 1]) right--;
//                         while (right > left && nums[left] == nums[left + 1]) left++;

//                         // 找到答案时，双指针同时收缩
//                         right--;
//                         left++;
//                     }
//                 }

//             }
//         }
//         return result;
//     }
// };


// @lc code=end

