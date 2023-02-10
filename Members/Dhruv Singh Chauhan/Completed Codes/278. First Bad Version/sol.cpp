// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long int h=n;
        long int l=1;
        long int mid;
        long int result=n;
        while(l<=h){
            mid=(l+h)/2;
            if(isBadVersion(mid)){
                result=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return result;
    }
};