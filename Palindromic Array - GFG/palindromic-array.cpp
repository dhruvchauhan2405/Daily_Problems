//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/
#include <bits/stdc++.h>

class Solution {
public:
    bool isPalindrome(int n){
        string s= to_string(n);
        reverse(s.begin(),s.end());
        int a = stoi(s);
        if(a==n) return true;
        else return false;    }
    int PalinArray(int a[], int n)
    {
    	// code here
    	
    	for(int i=0;i<n;i++){
    	    if(isPalindrome(a[i])==0){
    	        return false;
    	    }
    	}
    	return true;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends