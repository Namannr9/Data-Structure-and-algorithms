class Solution {
public:
    vector<vector<string>> mostPopularCreator(vector<string>& cre, vector<string>& ids, vector<int>& views) 
    {
        map<string,pair<string,vector<long>>> mp;
        int n=ids.size();
        long maxView=0;
        for(int i=0;i<n;i++)
        {
            if(mp.find(cre[i])!=mp.end())
            {
                pair<string,vector<long>> tmp=mp[cre[i]];
                if(views[i]>tmp.second[0])
                {
                    tmp.first=ids[i];
                    tmp.second[0]=views[i];
                }
                else if(views[i]==tmp.second[0])
                {
                    if(tmp.first>ids[i]) tmp.first=ids[i];
                }
                tmp.second[1]+=views[i];
                //cout<<cre[i]<<" "<<tmp.first<<" "<<tmp.second[1]<<endl;
                mp[cre[i]]=tmp;
            }
            else  // first time
            {
                mp[cre[i]]={ids[i],{views[i],views[i]}};
            }
            maxView=max(maxView,mp[cre[i]].second[1]);
        }
        
        vector<vector<string>> ans;
        //cout<<maxView<<endl;
        for(auto ele:mp)
        {
           //cout<<ele.first<<" "<<ele.second.second[1]<<endl;
            if(ele.second.second[1]==maxView) ans.push_back({ele.first,ele.second.first});
        }
        return ans;
    }
};
