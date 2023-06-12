//{ Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    long long solveTab(int n, int k){
    // vector<int> dp(n+1,0);
    long long mod = 1e9+7;
    long long prev2=k;
    if(n==1){
        return prev2;
    }
    long long prev1 = (k+k*(k-1));
    long long curr=0;
    for(int i=3;i<=n;i++){
        curr = ((prev1+prev2)*(k-1))%mod;
        prev2= prev1;
        prev1=curr;
    }

    return prev1%mod;
}
    
    long long countWays(int n, int k){
        // code here
        long long mod = 1e9+7;
        // vector<long long> dp(n+1,-1); 
        long long ans = solveTab(n,k);
        return ans%mod;
    }
};

//{ Driver Code Starts.

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		Solution ob;
		cout<<ob.countWays(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends