class Solution {
public:
    long long int mySqrt(long long x) {
        if(x==1)return 1;
        long long int n = x/2;
          for(long long int i=0;i<=n;i++){
            if((i*i)<=x && ((i+1)*( i+1))>x)
            return i;
        }
        return 0;
    }
};