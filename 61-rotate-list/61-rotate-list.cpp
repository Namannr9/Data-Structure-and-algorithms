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
    ListNode* rotateRight(ListNode* head, int k) 
    {
        if(head==NULL || head->next==NULL) return head;
        int len=1;
        ListNode *cur=head;
        while(cur->next)
        {
            len++;
            cur=cur->next;
        }
        
        cur->next=head; // making it circular
        k=k%len;
        k=len-k;
        while(k--)
        {
            cur=cur->next;
        }
        head=cur->next;
        cur->next=NULL;
        return head;
    }
};