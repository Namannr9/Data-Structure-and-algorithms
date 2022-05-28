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
        ListNode *dummy=new ListNode();
        ListNode *pre=dummy;
        dummy->next=head;
        for(int i=0;i<left-1;i++)
        {
            pre=pre->next;
        }
        ListNode *cur=pre->next;
        ListNode *tmp;
        for(int i=0;i<right-left;i++)
        {
           tmp = pre -> next;
           pre -> next = cur -> next;
           cur -> next = cur -> next -> next;
           pre -> next -> next = tmp;   
        }
        return dummy->next;
    }
};