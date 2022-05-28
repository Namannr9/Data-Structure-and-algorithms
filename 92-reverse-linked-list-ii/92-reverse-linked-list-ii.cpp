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
    ListNode* reverseBetween(ListNode* head, int left, int right) 
    {
         if(head==NULL) return NULL;
        ListNode *pre=NULL;
        ListNode *curr=head;
        while(left>1)
        {
            pre=curr;
            curr=curr->next;
            left--;
            right--;
        }
        ListNode *j=pre;
        ListNode *next=NULL;
        ListNode *tail=curr;
        while(right>0)
        {
            next=curr->next;
            curr->next=pre;
            pre=curr;
            curr=next;
            right--;
        }
        
        if(j!=NULL)
        {
            j->next=pre;
        }
        else
        {
            head=pre;
        }
        tail->next=curr;
        return head;
        
    }
};