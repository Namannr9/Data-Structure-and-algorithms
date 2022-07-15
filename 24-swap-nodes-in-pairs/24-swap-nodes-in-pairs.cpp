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
    ListNode* swapPairs(ListNode* head) 
    {
        if(head==NULL || head->next==NULL) return head;
        
        ListNode *cur=head;
        ListNode *next=NULL;
        ListNode *pre=NULL;
        while(cur && cur->next)
        {
            next=cur->next;
            cur->next=next->next;
            next->next=cur;
            if(pre==NULL) head=next;
            else pre->next=next;
            pre=cur;
            cur=cur->next;
        }
        return head;
    }
};