// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
};

/* Function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


 // } Driver Code Ends
/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        if(head==NULL || head->next==NULL) return head;
        struct node *cur=head;
        struct node *pre=NULL;
        struct node *next=NULL;
        int cnt=k;
        while(cnt-- && cur)
        {
            next=cur->next;
            cur->next=pre;
            pre=cur;
            cur=next;
        }
        head->next=reverse(cur,k);
        return pre;
    }
    /*
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        struct node *cur=head;
        struct node *pre=NULL;
        struct node *next=NULL;
        struct node *tail;
        struct node *ans;
        int cnt=k;
        while(cnt-- && cur)
        {
            next=cur->next;
            cur->next=pre;
            pre=cur;
            cur=next;
        }
        
        ans=pre;
        tail=head;
        while(cur)
        {
            pre=NULL;
            next=NULL;
            head=cur;
            cnt=k;
            while(cnt-- && cur)
            {
                next=cur->next;
                cur->next=pre;
                pre=cur;
                cur=next;
            }
            tail->next=pre;
            tail=head;
        }
        return ans;
    }
    */
};


// { Driver Code Starts.

/* Drier program to test above function*/
int main(void)
{
    int t;
    cin>>t;
     
    while(t--)
    {
        struct node* head = NULL;
        struct node* temp = NULL;
        int n;
        cin >> n;
         
        for(int i=0 ; i<n ; i++)
        {
            int value;
            cin >> value;
            if(i == 0)
            {
                head = new node(value);
                temp = head;
            }
            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
        }
        
        int k;
        cin>>k;
        
        Solution ob;
        head = ob.reverse(head, k);
        printList(head);
    }
     
    return(0);
}

  // } Driver Code Ends