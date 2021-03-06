class Solution {
public:
    vector<int> intersect(vector<int>& a, vector<int>& b) 
    {
        vector<int> ans;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int i=0;
        int j=0;
        while(i<a.size() && j<b.size())
        {
            if(a[i]==b[j])
            {
                ans.push_back(a[i]);
                i++;
                j++;
            }
            else if(a[i]<b[j]) i++;
            else j++;
        }
        return ans;
    }
};