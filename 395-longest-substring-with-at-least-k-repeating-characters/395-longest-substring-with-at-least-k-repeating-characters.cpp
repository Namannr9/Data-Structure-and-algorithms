class Solution {
public:
    int longestSubstring(string s, int k) 
    {
        int n=s.size();
        if(n==0 || k>n) return 0;
        if(k==1) return n;   // full length of string
        
        unordered_map<char,int> count;
        for(char c:s) count[c]++;
        
        int left=0;
        int right=0;
        int i=0;
        for(;i<n;i++)
        {
            if(count[s[i]]<k)
            {
                left=longestSubstring(s.substr(0,i),k);
                right=longestSubstring(s.substr(i+1),k);
                break;
            }
            
        }
        if(i==n) return n;      
     
        
        return max(left,right);
    }
};