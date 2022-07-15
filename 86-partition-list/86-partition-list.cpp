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
    ListNode* partition(ListNode* head, int x) 
    {
        ListNode *afterHead=new ListNode();
        ListNode *after=afterHead;
        ListNode *beforeHead=new ListNode();
        ListNode *before=beforeHead;
        while(head)
        {
            if(head->val < x)
            {
                before->next=head;
                before=head;
            }
            else
            {
                after->next=head;
                after=head;
              
            }
            head=head->next;
        }
        after->next=NULL;
        before->next=afterHead->next;
        return beforeHead->next;
    }
};