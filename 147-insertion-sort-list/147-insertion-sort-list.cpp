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
    ListNode* insertionSortList(ListNode* head) 
    {
        ListNode *cur=head;
        ListNode *start=new ListNode();
        start->next=head;
        ListNode *pre=start;
        
        while(cur)
        {
            if(cur->next && cur->val > cur->next->val)
            {
                while(pre->next && pre->next->val < cur->next->val) pre=pre->next;
                
                ListNode *tmp=pre->next;
                pre->next=cur->next;
                cur->next=cur->next->next;
                pre->next->next=tmp;
                pre=start;
            }
            else
            {
                cur=cur->next;
            }
        }
        return start->next;
    }
};