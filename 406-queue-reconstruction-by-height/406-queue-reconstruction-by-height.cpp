class Solution {
public:
    
    // sort array in descending order 
    // if two element having same height sort them in ascending order
    static bool cmp(vector<int> a ,vector<int> b)
    {
        if(a[0]==b[0]) return a[1]<b[1];
        return a[0]>b[0];
    }
    
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) 
    {
        sort(people.begin(),people.end(),cmp);
        
        vector<vector<int>> ans;
        
        for(int i=0;i<people.size();i++)
        {
            ans.insert(ans.begin()+people[i][1],people[i]);  // put element in correct position
        }
        return ans;
    }
};