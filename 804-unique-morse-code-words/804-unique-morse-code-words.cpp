class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) 
    {
         vector<string> morseCode={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        unordered_set<string> st;
        for(string word : words)
        {
            string tmp="";
            for(char c:word)
            {
                tmp+=morseCode[c-'a'];
            }
            st.insert(tmp);
        }
        return st.size();
    }
};