class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int index= m+n-1;
        int count=m-1;
        int last= n-1;
        while(count>=0 && last>=0){
            if(nums2[last]>nums1[count]){
                nums1[index] = nums2[last];
                last--;  
            }
            else {
                nums1[index] = nums1[count];
                count--;
            } 
            index--;   
        }
        while(count>=0){
            nums1[index--]=nums1[count--];
        }
        while(last>=0){
            nums1[index--]=nums2[last--];
        }
    }
};