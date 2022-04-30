/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    void dfs(Node *parent,Node *node,vector<Node*>& vis)
    {
        vis[parent->val]=parent;
        for(auto x:node->neighbors)
        {
            if(vis[x->val]==NULL)
            {
                Node *tmp=new Node(x->val);
                parent->neighbors.push_back(tmp);
                dfs(tmp,x,vis);
            }
            else
            {
                parent->neighbors.push_back(vis[x->val]);
            }
        }
    }
     Node* cloneGraph(Node* node) 
    {
        if(node==NULL) return NULL;
        vector<Node *> vis(1000,NULL);
        Node *parent=new Node(node->val);
        dfs(parent,node,vis);
        return parent;
             
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};