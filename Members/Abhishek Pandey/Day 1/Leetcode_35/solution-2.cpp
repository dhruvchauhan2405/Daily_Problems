//leetcode problem 35 - Search insert Position

//optimized solution - using binary search
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target>nums[nums.size()-1])
            return nums.size();
        else if(target<nums[0])
            return 0;
        else
        {
            int l = 0;
            int r = nums.size()-1;
            int mid = l +((r-l)/2);
            while(l<r)
            {
                if(nums[mid]==target)
                    return mid;
                if(nums[mid]>target)
                    r = mid-1;
                if(nums[mid]<target)
                    l = mid+1;
                mid = l +((r-l)/2);
            }
            if(nums[l]>target)
                return l;
            else if (nums[l]<target)
                return l+1;
            return l;
        }
    }
};