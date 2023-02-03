#include<iostream>
using namespace std;
int main(){
    int n;
    int k;
    cin>>n;
    cin>>k;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
    if(arr[i]==k){
        cout<<i;
      
    }
    else if(k>arr[i]){
        count++;
    }
    }
    cout<<count;
    return 0;
}

