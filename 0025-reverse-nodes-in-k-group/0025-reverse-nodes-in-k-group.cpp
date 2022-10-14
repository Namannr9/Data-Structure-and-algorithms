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
    ListNode* reverseKGroup(ListNode* head, int k) 
    {
        if(head==NULL || head->next==NULL) return head;
        int times=k;
        ListNode *cur=head;
        while(--times && cur) 
        {
            cur=cur->next;
        }
        if(cur==NULL) return head;
        
        ListNode *next=NULL;
        ListNode *pre=NULL;
        
        times=k;
        cur=head;
        
        while(times-- && cur)
        {
            next=cur->next;
            cur->next=pre;
            pre=cur;
            cur=next;
        }
        head->next=reverseKGroup(cur,k);
        return pre;
    }
};