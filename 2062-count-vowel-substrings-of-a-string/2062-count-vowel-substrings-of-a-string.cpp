class Solution {
public:
    bool isVowel(char x) 
    {
        return x == 'a' || x == 'e' || x == 'u' || x  == 'i' || x == 'o';
    }
    int countVowelSubstrings(string word) 
    {
        unordered_map<char,int> mp;
        int ans=0;
        for(int i=0;i<word.size();i++)
        {
            mp.clear();
            for(int j=i;j<word.size();j++)   // form all substring
            {
                if(isVowel(word[j]))
                {
                    mp[word[j]]++;
                    if(mp.size()==5) ans++;
                }
                else
                {
                    break; // constant found
                }
            }
        }
        return ans;
    }
};