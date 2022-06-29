// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
   int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
       int sum1=0, sum2=0, sum3=0, res=0;
       int i=N1-1, j=N2-1, k=N3-1;
       while(i>=0 || j>=0 || k>=0) {
           if(sum1==sum2 && sum2==sum3 ) res = max(res, sum1);
           if(sum1<=sum2 && sum1<=sum3){
               if(i<0) break;
               sum1 += S1[i--];
           }
           else if(sum2<sum1 && sum2<=sum3){
               if(j<0) break;
               sum2 += S2[j--];
           }
           else{
               if(k<0) break;
               sum3 += S3[k--];
           }
           //cout<<sum1<<' '<<sum2<<' '<<sum3<<'\n';
       }
       if(sum1==sum2 && sum2==sum3 ) res = max(res, sum1);
       return res;
   }
};

// { Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        vector<int> s1(n1),s2(n2),s3(n3);
        for(int i=0;i<n1;i++){
            cin>>s1[i];
        }
        for(int i=0;i<n2;i++){
            cin>>s2[i];
        }
        for(int i=0;i<n3;i++){
            cin>>s3[i];
        }
        Solution ob;
        int ans=ob.maxEqualSum(n1,n2,n3,s1,s2,s3);
        cout<<ans<<endl;
    }
    
    return 0;
}  // } Driver Code Ends