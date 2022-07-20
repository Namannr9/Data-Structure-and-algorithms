class Solution {
public:
    static bool cmp(vector<int> a,vector<int> b)
    {
        return a[1]>b[1]; // descending order
    }
    int maximumUnits(vector<vector<int>>& boxes, int truckSize) 
    {
        sort(boxes.begin(),boxes.end(),cmp);
        
        int ans=0;
        
        for(int i=0;i<boxes.size();i++)
        {
            int n=min(truckSize,boxes[i][0]);
            
            ans+=n*boxes[i][1];
            truckSize-=n;
        }
        return ans;
    }
};