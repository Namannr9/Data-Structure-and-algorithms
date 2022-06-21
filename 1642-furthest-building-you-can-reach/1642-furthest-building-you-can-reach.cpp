class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) 
    {
        priority_queue<int> pq;
        int n=heights.size();
        for(int i=1;i<n;i++)
        {
            int dif=heights[i]-heights[i-1];
            if(dif>0)
            {
                bricks-=dif;
                pq.push(dif);
                if(bricks<0)
                {
                    bricks+=pq.top();
                    pq.pop();
                    
                    ladders--;
                    if(ladders<0) return i-1; // no ladders are present 
                    if(bricks<0) return i-1;   // no bricks are available for present index.
                }
            }
        }
        return n-1; // reach the end
    }
};