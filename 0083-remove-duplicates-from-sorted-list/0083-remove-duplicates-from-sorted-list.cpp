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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        if(head==NULL || head->next==NULL) return head;
        ListNode *dummy=new ListNode();
        dummy->next=head;
        ListNode *ans=head;
        
        while(head)
        {
            if(head->val!=ans->val)
            {
                ans->next=head;
                ans=ans->next;
            }
            head=head->next;
        }
        ans->next=NULL;
        return dummy->next;
        
        
        
        
    }
};