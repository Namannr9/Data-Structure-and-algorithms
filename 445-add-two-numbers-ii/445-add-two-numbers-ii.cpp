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
    
    ListNode *addTwoNode(ListNode *a,ListNode *b,int &carry)
    {
        if(a==NULL && b==NULL) return NULL;
        
        ListNode *newNode=new ListNode(0);
        newNode->next=addTwoNode(a->next,b->next,carry);
        int sum=a->val+b->val+carry;
        newNode->val=sum%10;
        carry=sum/10;
       
        return newNode;
    }
    
     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
     {
         
         // in this loop we ae adding leading zero for making equal size of linked list
         ListNode *a=l1;
         ListNode *b=l2;
         while(a || b)
         {
              if(a==NULL)
              {
                  ListNode *front=new ListNode(0);
                  front->next=l1;
                  l1=front;
                  b=b->next;
              }
              else if(b==NULL)
              {
                  ListNode *front=new ListNode(0);
                  front->next=l2;
                  l2=front;
                  a=a->next;
              }
              else
              {
                  a=a->next;
                  b=b->next;
              }
          }
         
         int carry=0;
         ListNode *dummy=new ListNode(0);
         dummy->next=addTwoNode(l1,l2,carry);
         if(carry)
         {
             ListNode *front=new ListNode(carry);
             front->next=dummy->next;
             dummy->next=front;
         }
         return dummy->next;
     }
    
    /*ListNode *reverse(ListNode *cur)
    {
        ListNode *pre=NULL;
        ListNode *next;
        while(cur)
        {
            next=cur->next;
            cur->next=pre;
            pre=cur;
            cur=next;
        }
        return pre;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode *a=reverse(l1);
        ListNode *b=reverse(l2);
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
        
        return reverse(ans->next);
        
    }
    */
};