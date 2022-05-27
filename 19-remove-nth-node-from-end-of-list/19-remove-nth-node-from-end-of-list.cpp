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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
    
        int len=0;
        ListNode *cur=head;
        while(cur)
        {
            cur=cur->next;
            len++;
        }
        len=len-n;
        if(len==0) return head->next;
        cur=head;
        ListNode *pre=new ListNode();
        for(int i=0;i<len;i++)
        {
            pre=cur;
            cur=cur->next;
        }
        pre->next=pre->next->next;
        return head;
    }
    
    
    
    
    
    
    
    
    
    
    
    /*
     ListNode *start=new ListNode(0);
        start->next=head;
        ListNode *slow=start;
        ListNode *fast=start;
        for(int i=1;i<=n;i++) fast=fast->next;
        
        while(fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
        
        slow->next=slow->next->next;
        return start->next;
            
    */
};