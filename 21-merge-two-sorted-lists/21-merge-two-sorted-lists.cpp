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
    
    // Iterative solution
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) 
    {
        ListNode *head=new ListNode();
        ListNode *cur=head;
        while(a && b)
        {
            if(a->val < b->val)
            {
                cur->next=a;
                a=a->next;
            }
            else
            {
                cur->next=b;
                b=b->next;
            }
            cur=cur->next;
        }
        if(a) cur->next=a;
        if(b) cur->next=b;
        
        return head->next;
    }
    
    /*
    // Recursive solution    
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) 
    {
        if(a==NULL) return b;
        if(b==NULL) return a;
        
        ListNode *head;
        
        if(a->val < b->val)
        {
            head=a;
            head->next=mergeTwoLists(a->next,b);
        }
        else
        {
            head=b;
            head->next=mergeTwoLists(a,b->next);
        }
        return head;     
    }
    */
};