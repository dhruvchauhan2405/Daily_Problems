class Solution {
public:
    long long int mySqrt(long long x) {
        long long y=0;
        while(y*y<=x){
            y++;
        }
        return y-1;
    }
};