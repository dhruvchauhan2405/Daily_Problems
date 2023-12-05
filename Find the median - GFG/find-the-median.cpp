//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	public:
		int find_median(vector<int> arr)
		{
		    int median=0;
		    int n= arr.size();
		    sort(arr.begin(),arr.end());
		  //  for(int i=0;i<v.size();i++){
		  //      cout<<v[i];
		  //  }
		    if(n%2==0){
		        median = (arr[(n/2)-1] + arr[(n/2)])/2;
		    }
		    else{
		        median = arr[(n/2)];
		    }
		    return median;
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(n);
    	for(int i = 0; i < n; i++)
    		cin>>v[i];
    	Solution ob;
    	int ans = ob.find_median(v);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends