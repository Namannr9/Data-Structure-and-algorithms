class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) 
    {
        unordered_map<string,int> fre;
        
        for(int i=0;i<s.size();i++)
        {
            string tmp=s.substr(i,10);
            fre[tmp]++;
        }
        vector<string> ans;
        
        for(auto ele : fre)
        {
            if(ele.second>1) ans.push_back(ele.first);
        }
        
        return ans;
          
            
   }
};