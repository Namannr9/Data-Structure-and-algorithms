class Solution {
public:
    /*
    for every row we are calculating largest area in histogram
    */
    int maxArea(vector<int> heights)
    {
        stack<int> st;
        int n=heights.size();
        int height;
        int width;
        int ans;
        for(int i=0;i<=n;i++)
        {
            while(st.size() && (i==n || heights[st.top()]>=heights[i]))
            {
                height=heights[st.top()];
                st.pop();
                if(st.empty()) width=i;
                else width=i-st.top()-1;
                ans=max(ans,width * height);
            }
            st.push(i);
        }
        return ans;
    }
    int maximalRectangle(vector<vector<char>>& matrix) 
    {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int> heights(m,0);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]=='1') heights[j]+=1;
                else heights[j]=0;
            }
            int tmp=maxArea(heights);
            ans=max(ans,tmp);
        }
        return ans;
    }
};