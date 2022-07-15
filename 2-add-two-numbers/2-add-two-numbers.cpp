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
    ListNode* addTwoNumbers(ListNode* a, ListNode* b) 
    {
        ListNode *ans=new ListNode();
        ListNode *cur=ans;
        int sum=0;
        int carry=0;
        while(a || b)
        {
            int x=(a) ? a->val : 0;
            int y=(b) ? b->val : 0;
            sum=x+y+carry;
            cur->next=new ListNode(sum%10);
            cur=cur->next;
            carry=sum/10;
            if(a) a=a->next;
            if(b) b=b->next;
        }
        if(carry) cur->next=new ListNode(carry);
        return ans->next;
    }
};