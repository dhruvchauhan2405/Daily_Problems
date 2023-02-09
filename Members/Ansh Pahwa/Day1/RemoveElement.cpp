class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
     int n=0;
        for(auto i:nums){
            if(i!=val){
            nums[n]=i;
            n++;
            }
        


        }
        return n;
    }
};