/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) 
    {
    
    if(head==NULL) return NULL;
        if(head->next==NULL)
        {
            Node *i=new Node(head->val);
            if(head->random!=NULL) i->random=i;
            return i;
        }
            
        
        Node *i=head;
        Node *front;
        while(i)
        {
            front=i->next;
            Node *copy=new Node(i->val);
            i->next=copy;
            copy->next=front;
            i=front;
        }
        i=head;
        while(i!=NULL)
        {
            if(i->random!=NULL  && i->next!=NULL)
            {
                i->next->random=i->random->next;
            }
            i=i->next->next;
        }
        
        i=head;
        Node *tmp=new Node(0);
        Node *copy=tmp;
        while(i)
        {
            front=i->next->next;
            copy->next=i->next;
            i->next=front;
            copy=copy->next;
            i=i->next;
        }
    return tmp->next;
    
}
    
    /*
    Node* copyRandomList(Node* head) 
    {
        map<Node *,Node *> mp;
        Node *cur=head;
        while(cur)
        {
            Node *tmp=new Node(cur->val);
            mp[cur]=tmp;
            cur=cur->next;
        }
        
        Node *dummy=new Node(0);
        Node *ans=dummy;
        cur=head;
        while(cur)
        {
            Node *tmp=mp[cur];
            tmp->next=mp[cur->next];
            tmp->random=mp[cur->random];
            
            ans->next=tmp;
            ans=ans->next;
            cur=cur->next;
        }
        ans->next=NULL;
        return dummy->next;
    }
    */
};