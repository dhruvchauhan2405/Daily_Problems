class Solution {
public:
    int mySqrt(int x) {
        long long y=0;
        while(y*y<=x){
            y++;
        }
        return y-1;   
    }
};