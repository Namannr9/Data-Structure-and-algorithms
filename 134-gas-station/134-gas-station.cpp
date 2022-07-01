class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
        int required=0;
        int extra=0;
        int start=0;
        int n=gas.size();
        for(int i=0;i<n;i++)
        {
            extra+=gas[i]-cost[i];
            if(extra<0)
            {
                start=i+1;
                required+=extra;
                extra=0;
            }
        }
        
        if(required+extra>=0) return start;
        return -1;
    }
};