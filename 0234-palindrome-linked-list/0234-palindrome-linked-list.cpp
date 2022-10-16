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
    bool isPalindrome(ListNode* head) 
    {
        ListNode *slow=head;
        ListNode *fast=head;
        
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        ListNode *cur=slow;
        ListNode *pre=NULL;
        ListNode *next=NULL;
        
        while(cur)
        {
            next=cur->next;
            cur->next=pre;
            pre=cur;
            cur=next;
        }
        
        while(pre && head)
        {
            if(pre->val !=head->val) return false;
            pre=pre->next;
            head=head->next;
        }
        return true;
        
    }
};