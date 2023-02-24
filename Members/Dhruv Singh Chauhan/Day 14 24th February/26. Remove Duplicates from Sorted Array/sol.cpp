class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int currnum=nums[0];
        int changeno=1;
        for(int i=1;i<nums.size();i++){
            
            if(nums[i]!=currnum){
                nums[changeno]=nums[i];
                changeno++;
                currnum=nums[i];
                
            }
        }
        return changeno;
    }
};