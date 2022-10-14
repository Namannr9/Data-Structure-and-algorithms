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
        ListNode *first=head;
        ListNode *second=NULL;
        ListNode *pre=NULL;
        while(first && first->next)
        {
            second=first->next;
            first->next=second->next;
            second->next=first;
            if(pre==NULL) head=second;
            else pre->next=second;
            pre=first;
            first=first->next;
        }
        return head;
    }
};