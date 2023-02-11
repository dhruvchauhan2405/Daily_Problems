class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int s=0;
        int i;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                nums[s++]=nums[i];
           
        }
        }
        return s;
        
    }
};