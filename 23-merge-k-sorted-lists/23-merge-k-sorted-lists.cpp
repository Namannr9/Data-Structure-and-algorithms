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
    ListNode *merge(ListNode * a,ListNode *b)
    {
        if(a==NULL) return b;
        if(b==NULL) return a;
        
        ListNode *ans=NULL;
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
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        
        int n=lists.size();
        if(n==0) return NULL;
        ListNode *head=lists[0];
        for(int i=1;i<n;i++)
        {
            head=merge(head,lists[i]);
        }
        return head;
    }
};