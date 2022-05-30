// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    void solve(int left,int right,vector<int> &nums,vector<int> &ans)
    {
        if(left>right) return;
        int mid=(left+right)/2;
        ans.push_back(nums[mid]);
        solve(left,mid-1,nums,ans);
        solve(mid+1,right,nums,ans);
    }
    vector<int> sortedArrayToBST(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int> ans;
        solve(0,n-1,nums,ans);
        return ans;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends