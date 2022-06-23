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
    
    /*
    
    if we given 1 2 3 4 5 6 and middle as 3 so fast=head->next;
    
    if we given 1 2 3 4 5 6 and middle as 4 so fast=head;
    
    
    */
    
    ListNode* middleNode(ListNode* head) 
    {
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};