class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsub= nums[0];
        int currsum=0;
        for(int i=0;i<nums.size();i++){
            if(currsum<0){
                currsum=0;
            }
            currsum=currsum+nums[i];
            maxsub= max(maxsub,currsum);
        }
        return maxsub;
    }
};