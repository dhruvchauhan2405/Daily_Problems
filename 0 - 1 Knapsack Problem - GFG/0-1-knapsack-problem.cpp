//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    // int knapSack(int W, int wt[], int val[], int n) 
    // { 
    //   // Your code here
    //   if(n==0){
    //       if(wt[0]<= W){
    //           return val[0];
    //       }
    //       else{
    //           return 0;
    //       }
    //   }
    //   int include =0;
    //   if(wt[n]<=W){
    //         include = val[n] + knapSack(W-wt[n],wt,val,n-1);
    //   }
       
    //   int exclude = 0+ knapSack(W,wt,val,n-1);
       
    //   int ans = max(include,exclude);
    //   return ans;
       
    // }
    int topDown(int W, int wt[], int val[], int n, vector<vector<int>>& dp)  
    { 
       // Your code here
       if(n==0){
           if(wt[0]<= W){
               return val[0];
           }
           else{
               return 0;
           }
       }
       if(dp[n][W] != -1){
           return dp[n][W];
       }
       int include =0;
       if(wt[n]<=W){
            include = val[n] + topDown(W-wt[n],wt,val,n-1,dp);
       }
       
       int exclude = 0+ topDown(W,wt,val,n-1,dp);
       
       dp[n][W] = max(include,exclude);
       return dp[n][W];
       
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<vector<int>> dp(n,vector<int>(W+1,-1));
       
       int ans = topDown(W,wt,val,n-1,dp);
       return ans;
       
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends