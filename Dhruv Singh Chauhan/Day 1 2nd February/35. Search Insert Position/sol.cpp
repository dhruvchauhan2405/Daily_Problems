class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;

        while(low<high){
            int mid=(low+high)/2;
            if(nums[mid]==target)
            return mid;
            if(low+1==high){
                if(target>nums[low]&&target<=nums[high])
                return low+1;
            }
            if(target>nums[mid]){
                low=mid+1;
            }
            else{
                high = mid-1;
            }
        }
        if(nums[low]<target){
            return low+1;
        }
        if(low==0)return 0;
        if(nums[low]>target || nums[low]==target)
        return low;
        return low-1;
    }
};