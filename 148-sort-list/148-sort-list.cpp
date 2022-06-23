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
    ListNode *merge(ListNode *a,ListNode *b)
    {
        if(a==NULL) return b;
        if(b==NULL) return a;
        
        ListNode *ans;
        if(a->val < b->val)
        {
            ans=a;
            ans->next=merge(a->next,b);
        }
        else
        {
            ans=b;
            ans->next=merge(a,b->next);
        }
        return ans;
    }
    ListNode *findMid(ListNode *head)
    {
        ListNode *slow=head;
        ListNode *fast=head->next;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* sortList(ListNode* head) 
    {
        if(head==NULL || head->next==NULL) return head;
        ListNode *mid=findMid(head);
        ListNode *left=head;
        ListNode *right=mid->next;
        mid->next=NULL;
        
        left=sortList(left);
        right=sortList(right);
        
        return merge(left,right);
    }
};