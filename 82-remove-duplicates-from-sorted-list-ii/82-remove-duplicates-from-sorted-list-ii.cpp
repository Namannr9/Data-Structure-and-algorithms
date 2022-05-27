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
        ListNode *ans=new ListNode();
        ListNode *pre=ans;
        pre->next=head;
        while(head)
        {
            if(head->next && head->val==head->next->val)
            {
                while(head->next && head->val==head->next->val)
                {
                    head=head->next;
                }
                pre->next=head->next;
            }
            else
            {
                pre=pre->next;
            }
            head=head->next;
        }
        return ans->next;
        
    }
};