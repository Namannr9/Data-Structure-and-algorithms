// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node * reverse(Node *head)
    {
        Node *cur=head;
        Node *pre=NULL;
        Node *next=NULL;
        while(cur)
        {
            next=cur->next;
            cur->next=pre;
            pre=cur;
            cur=next;
        }
        return pre;
    }
    Node* addOne(Node *head) 
    {
        if(head->next==NULL)
        {
            head->data++;
            return head;
        }
        
        Node *newHead=reverse(head);
        Node *cur=newHead;
        while(cur)
        {
            int sum=cur->data+1;
            if(sum==10 && cur->next!=NULL)
            {
                cur->data=0;
                cur=cur->next;
            }
            else
            {
                cur->data=sum;
                break;
            }
        }
        
        head=reverse(newHead);
        return head;
        
    }
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 
  // } Driver Code Ends