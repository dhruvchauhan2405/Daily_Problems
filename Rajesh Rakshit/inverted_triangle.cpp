#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  for(int row=0;row<n;row++){
    int start=((n-row)*(n-row+1))/2;
      for(int col=0;col<n-row;col++){
        cout<<(start-(n-row-1)+col)<<" ";
        }
    cout<<endl;
  }
}
