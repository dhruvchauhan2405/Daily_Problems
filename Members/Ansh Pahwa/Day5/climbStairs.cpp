#include<iostream>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
 
    if(n>2){

        int ways[n];
        ways[0]=1;
        ways[1]=2;
        
            for(int i=2;i<n;i++){
                
                ways[i]=ways[i-2]+ways[i-1];
            }
        
        n=ways[n-1];
    }
   

        return n;
    }
};
int main(){

return 0;
}