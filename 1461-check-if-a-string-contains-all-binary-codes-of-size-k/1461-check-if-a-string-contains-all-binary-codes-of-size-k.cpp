class Solution {
public:
    bool hasAllCodes(string s, int k) 
    {
        map<int,int> mp;
        int n=s.size();
        int c=0;
        for(int i=0;i<n-k+1;i++)
        {
            string tmp=s.substr(i,k);
            int t=stoi(tmp,NULL,2);
            mp[t]++;
        }
      //  cout<<"total subset "<<c<<endl;
        n=pow(2,k);
        cout<<"power "<<n<<endl;
        for(int i=0;i<n;i++)
        {
            if(mp.find(i)==mp.end()) return false;
        }
        return true;
    }
};