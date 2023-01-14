class Solution {
public:
    void dfs(string email,vector<string> &tmp,unordered_set<string> &vis,unordered_map<string,vector<string>> &adj)
    {
        vis.insert(email);   
        tmp.push_back(email);
        for(string e : adj[email])
        {
            if(vis.find(e)==vis.end())   // visited first time
            {
                dfs(e,tmp,vis,adj);
            }
        }
        
    }
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) 
    {
        unordered_map<string,vector<string>> adj;
        unordered_set<string> vis;
        vector<vector<string>> ans;
        
        for(auto acc : accounts)         // creating the adjacency list of emails
        {
            for(int j=1;j<acc.size()-1;j++)
            {
                adj[acc[j]].push_back(acc[j+1]);
                adj[acc[j+1]].push_back(acc[j]);
            }
        }
        
        for(auto acc : accounts)
        {
            if(vis.find(acc[1])==vis.end())    // here we are finding the email is visited or not
            {
                vector<string> tmp;
                tmp.push_back(acc[0]);     // pushing name of account
                dfs(acc[1],tmp,vis,adj);
                sort(tmp.begin()+1,tmp.end());         // sorting all email start from index 1 because at first index name of account is present 
                ans.push_back(tmp);
            }
        }
        
        return ans;
        
        
    }
};