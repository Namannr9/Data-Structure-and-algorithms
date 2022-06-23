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
    void reorderList(ListNode* head) 
    {
        ListNode *slow=head;
        ListNode *fast=head->next;
        while(fast && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *head2=slow->next;
        slow->next=NULL;
        
        ListNode *pre=NULL;
        while(head2)
        {
            ListNode *next=head2->next;
            head2->next=pre;
            pre=head2;
            head2=next;  
        }
        
        head2=pre;
        //cout<<head2->val<<endl;
        while(head && head2)
        {
            ListNode *next=head->next;
            head->next=head2;
            head=head->next;
            head2=next;
        }
        
        
        
    }
};