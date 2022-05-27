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
        ListNode *pre=NULL;
        ListNode *tmp;
        while(cur && cur->next)
        {
            tmp=cur->next;
            cur->next=tmp->next;
            tmp->next=cur;
            if(pre==NULL) head=tmp;
            else pre->next=tmp;
            pre=cur;
            cur=cur->next;
        }
        
        return head;
    }
};