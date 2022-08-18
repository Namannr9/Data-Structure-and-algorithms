class Solution {
public:
    int minSetSize(vector<int>& arr) 
    {
         unordered_map<int,int> mp;
        for(int a : arr) mp[a]++;
        
        vector<int> fre;
        for(auto ele : mp) fre.push_back(ele.second);
        
        sort(fre.begin(),fre.end(),greater<int>());
        
        int half=arr.size()/2;
        int ans=0;
        int remove=0;
        for(int i=0;remove<half;i++)
        {
            ans++;
            remove+=fre[i];
        }
        return ans;
    }
};