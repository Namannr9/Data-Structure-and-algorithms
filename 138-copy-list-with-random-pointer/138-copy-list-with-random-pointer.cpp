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
};