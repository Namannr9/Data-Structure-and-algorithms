// { Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//Back-end complete function Template for C++

class Node
{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        this->data=x;
        this->left=NULL;
        this->right=NULL;
    }
};

Node *insert(Node *root,int data)
{
    if(root==NULL) 
    {
        Node *root=new Node(data);
        return root;
    }
    
    if(data < root->data) root->left=insert(root->left,data);
    if(data > root->data) root->right=insert(root->right,data);
    
    return root;
    
}


Node *inorderSuc(Node *root,int data)
{
    Node *cur=root;
    Node *suc=NULL;
    
    while(cur!=NULL)
    {
        if(cur->data <= data) cur=cur->right;
        else
        {
            suc=cur;
            cur=cur->left;
        }
    }
    return suc;
    
}




class Solution{
    public:
    vector<int> findLeastGreater(vector<int>& arr, int n) 
    {
        vector<int> ans(n);
        Node *root=NULL;
        for(int i=n-1;i>=0;i--)
        {
            root=insert(root,arr[i]);
            Node *suc=inorderSuc(root,arr[i]);
            if(suc==NULL) ans[i]=-1;
            else ans[i]=suc->data;
        }
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<int>arr(n);
	    for(int i = 0 ; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findLeastGreater(arr, n);
	    for(auto it : ans){
	        cout << it << " ";
	    }
	    cout <<endl;
	}
	return 0;
}
  // } Driver Code Ends