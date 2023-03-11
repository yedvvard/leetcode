/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* dummyHeadA = new ListNode(0);
        ListNode* dummyHeadB = new ListNode(0);
        dummyHeadA = headA;
        dummyHeadB = headB;
        ListNode* curA = dummyHeadA;
        ListNode* curB = dummyHeadB;

        int szA = 0,szB = 0;
        while(curA){
            curA = curA->next;
            szA ++;
        }
        while(curB){
            curB = curB->next;
            szB ++;
        }
        curA = dummyHeadA;
        curB = dummyHeadB;
        if(szA > szB){
            int diff = szA - szB;
            while(diff --){
                curA = curA->next;
            }
        }else{
            int diff = szB - szA;
            while(diff --){
                curB = curB->next;
            }
        }

        while(curA != curB){
            curA = curA->next;
            curB = curB->next;
        }

        return curA;

    }
};
// @lc code=end

