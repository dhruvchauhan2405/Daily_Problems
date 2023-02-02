class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int point=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                continue;
            }
            
            else{
                nums[point]=nums[i];
                point++;
            }
        }
        
        return point;
    }
};