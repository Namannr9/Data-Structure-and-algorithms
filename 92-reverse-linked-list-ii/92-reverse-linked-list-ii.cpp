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
        ListNode *lastLeft=dummy;
        lastLeft->next=head;
        ListNode *cur=head;
        int i;
        for(i=1;i<left;i++)
        {
            lastLeft=cur;
            cur=cur->next;
        }
        ListNode *pre=NULL;
        ListNode *next=NULL;
        while(i<=right)
        {
            next=cur->next;
            cur->next=pre;
            pre=cur;
            cur=next;
            i++;
        }
        lastLeft->next->next=cur;
        lastLeft->next=pre;
        return dummy->next;
    }
};