class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int f,l;
        f=0;
        l=nums.size();
        int temp=0;
        for(int i=f;i<l;i++){
            
            if(nums[i]==target)
            temp=i;

            else if(nums[i]>target){
             l= (f+l)/2;
            }
            else if(nums[i]<target){
             f= (f+l)/2;
               temp=i+1;
            }
        }
        if(temp<0)
        temp=0;

            return temp;
    }
};