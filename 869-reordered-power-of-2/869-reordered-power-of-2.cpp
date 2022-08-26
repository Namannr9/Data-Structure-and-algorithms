class Solution {
public:
    bool reorderedPowerOf2(int n) 
    {
        unordered_map<int,vector<string>> mp;
        long long int num=1;
        for(int i=1;i<32;i++)
        {
            string tmp=to_string(num);
            sort(tmp.begin(),tmp.end());
            mp[tmp.size()].push_back(tmp);
            num=num*2;
        }
        
        string tmp=to_string(n);
        sort(tmp.begin(),tmp.end());
        for(string a : mp[tmp.size()])
        {
            if(a==tmp) return true;
        }
        return false;
    }
};