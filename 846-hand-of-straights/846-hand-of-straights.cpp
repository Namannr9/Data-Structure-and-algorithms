class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int size) 
    {
        map<int,int> mp;
        for(int num : hand) mp[num]++;
        
        for(auto ele : mp)
        {
            if(ele.second > 0) 
            {
                for(int i=0;i<size;i++)
                {
                    if(mp[i+ele.first]-ele.second < 0 ) return false;
                    mp[i+ele.first]-=ele.second;
                }
            }
        }
        return true;
            
    }
};