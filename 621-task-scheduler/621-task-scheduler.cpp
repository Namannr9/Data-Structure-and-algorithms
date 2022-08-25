class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) 
    {
        unordered_map<char,int> mp;
        priority_queue<int> pq;
        
        for(char c: tasks) mp[c]++;
        
        for(auto ele:mp) pq.push(ele.second);
        
        int ans=0;
        while(!pq.empty())
        {
            int time=0;
            vector<int> tmp;
            
            for(int i=0;i<n+1;i++)
            {
                if(pq.size()) 
                {
                    tmp.push_back(pq.top());
                    pq.pop();
                    time++;
                }
            }
            
            for(int i=0;i<tmp.size();i++) if(--tmp[i]>0) pq.push(tmp[i]);
            
            if(pq.empty()) ans+=time;
            else ans+=n+1;
            
        }
        return ans;
    }
};