class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int f) 
    {
        int count=0;
        int n=flowerbed.size();
        for(int i=0;i<n;i++)
        {
            int pre = (i==0 || flowerbed[i-1]==0) ? 0 : 1;
            int next= (i==n-1 || flowerbed[i+1]==0) ? 0 : 1;
            
            if(pre==0 && next==0 && flowerbed[i]==0)
            {
                count++;
                flowerbed[i]=1;
            }
        }
        
        return count>=f;
    }
};