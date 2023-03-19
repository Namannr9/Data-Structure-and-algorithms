class Solution {
public:
    vector<int> lexicalOrder(int n) 
    {
        vector<string> tmp;
        for(int i=1;i<=n;i++) tmp.push_back(to_string(i));
        sort(tmp.begin(),tmp.end());
        vector<int> ans;
        for(string s:tmp) ans.push_back(stoi(s));
        return ans;
    }
};