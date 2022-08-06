class Solution {
public:
    
    int largestRectangleArea(vector<int>& heights) 
    {
        stack<int> st;
        int n=heights.size();
        int width;
        int ans=0;
        for(int i=0;i<=n;i++)
        {
            while(st.size() && (i==n || heights[st.top()]>=heights[i]))
            {
                int height=heights[st.top()];
                st.pop();
                if(st.empty()) width=i;
                else width=i-st.top()-1;
                
                ans=max(ans,width * height);
            }
            st.push(i);
        }
        return ans;
    }
    
    /*
    int largestRectangleArea(vector<int>& heights) 
    {
        int ans=0;
        int n=heights.size();
        int area;
        for(int i=0;i<n;i++)
        {
            int mn=heights[i];
            for(int j=i;j<n;j++)
            {
                mn=min(heights[j],mn);
                area=mn*(j-i+1);
                ans=max(ans,area);
            }
        }
        return ans;
    }
    */
};