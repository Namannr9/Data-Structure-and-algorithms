class Solution {
public:
    bool checkString(string s) 
    {
        bool a=false;
        bool b=false;
        for(char c : s)
        {
            if(c=='a' && b==true) a=true;
            else if(c=='b') b=true;
            if(b==true && a==true) return false;
        }
        return true;
    }
};