class Solution {
public:
    bool equalFrequency(string word) 
    {
        for(int i=0;i<word.size();i++)
        {
            
            unordered_map<char,int> mp;
            unordered_map<int,int> fre;
            
            for(int j=0;j<word.size();j++)
            {
                if(i!=j) mp[word[j]]++;
            }
            
            for(auto ele:mp) fre[ele.second]++;
            
            if(fre.size()==1) return true;
            
        }
        return false;
    }
};