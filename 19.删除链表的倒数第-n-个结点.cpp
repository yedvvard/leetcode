/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第 N 个结点
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummyHead = new ListNode(0);
        dummyHead->next = head;
        ListNode* cur = dummyHead;
        ListNode* pre = dummyHead;

        int i = n + 1;//此处需要+1，这样才能保证pre指向的下一个是目标节点
        while(i--){
            cur = cur->next;
        }

        while(cur){
            cur = cur->next;
            pre = pre->next;
        }
        //不需要的判断：
        // if(pre->next != nullptr && pre->next->next != nullptr) 
        pre->next = pre->next->next;
        return dummyHead->next;

    }
};
// @lc code=end

