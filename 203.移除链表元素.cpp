/*
 * @lc app=leetcode.cn id=203 lang=cpp
 *
 * [203] 移除链表元素
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  };

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummyhead(0, head);
        ListNode* curr = &dummyhead;
        while(curr->next!=NULL){
            if(curr->next->val == val){
                curr->next = curr->next->next;
            } else {
                curr = curr->next;
            }
        }
        return dummyhead.next;
    }
};
// @lc code=end

