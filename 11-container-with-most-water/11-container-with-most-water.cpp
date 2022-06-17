class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int ans=0;
        int area=0;
        int left=0;
        int right=height.size()-1;
        while(left<right)
        {
            if(height[left]<height[right])
            {
                area=height[left]*(right-left);
                ans=max(area,ans);
                left++;
            }
            else
            {
                area=height[right]*(right-left);
                ans=max(area,ans);
                right--;
            }
        }
        return ans;
    }
    
    
    
    /*
    Time limit exceed
    int maxArea(vector<int>& height) 
    {
        int sum=0;
        int ans=0;
        int n=height.size();
        for(int i=0;i<n;i++)
        {
            sum=0;
            for(int j=i+1;j<n;j++)
            {
                sum=min(height[i],height[j])*(j-i);
                
                ans=max(ans,sum);
            }
        }
        return ans;
    }
    */
};