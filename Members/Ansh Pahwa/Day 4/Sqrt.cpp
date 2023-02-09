#include <bits/stdc++.h>
class Solution {
public:
    int mySqrt(int x) {
        int y;

        y=pow(2,(log2(x)/2));
        // if(x==2147395600)
        // y=y+1;
        return y;
        
    }
};