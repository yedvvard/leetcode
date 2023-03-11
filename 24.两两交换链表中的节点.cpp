/*
 * @lc app=leetcode.cn id=24 lang=cpp
 *
 * [24] 两两交换链表中的节点
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
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;
        ListNode* dummyHead = new ListNode(0);
        dummyHead->next = head;
        ListNode* cur = dummyHead;
        ListNode* tmp1 = cur->next->next;
        ListNode* tmp2 = tmp1->next;
        //循环停止的条件设为tmp1 || tmp2）是错误的
        while(cur->next != nullptr && cur->next->next != nullptr){
            tmp1 = cur->next->next;
            tmp2 = tmp1->next;
            tmp1->next = cur->next;
            cur->next->next = tmp2;
            cur->next = tmp1;
            cur = tmp1->next;
        }
        return dummyHead->next;
    }
};
// @lc code=end

