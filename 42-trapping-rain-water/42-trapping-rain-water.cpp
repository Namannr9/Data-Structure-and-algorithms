class Solution {
public:
    int trap(vector<int>& height) 
    {
        int n=height.size();
        int ans=0;
        int left=0;
        int right=n-1;
        int leftmax=0;
        int rightmax=0;
        while(left<=right)
        {
            if(height[left]<height[right])
            {
                if(height[left]>leftmax) leftmax=height[left];
                ans+=leftmax-height[left];
                left++;
            }
            else
            {
                if(height[right]>rightmax) rightmax=height[right];
                ans+=rightmax-height[right];
                right--;
            }
        }
        return ans;
    }
    
    /*
     int trap(vector<int>& height) 
    {
        int total=0;
        int l;
        int r;
        int n=height.size();
        for(int i=1;i<n-1;i++)
        {
            l=i-1;
            r=i+1;
            int leftmax=0;
            int rightmax=0;
            while(l>=0)
            {
                leftmax=max(leftmax,height[l]);
                l--;
            }
            while(r<n)
            {
                rightmax=max(rightmax,height[r]);
                r++;
            }
            int mn=min(leftmax,rightmax);
            
            if(mn>height[i]) total+=mn-height[i];
        }
        return total;
    }
    */
};