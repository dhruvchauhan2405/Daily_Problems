//Leetcode Problem 27 - Remove Element

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int left = 0; //pointer for left element
        int right = nums.size()-1; //pointer for right element
        while(left<=right)
        {
            /*if the element at left position is same as value swap it with elemnt at right position
            and pop the last elemnt and move right pointer behind by one position */
            if(nums[left]==val)
            {
                swap(nums[left],nums[right]);
                nums.pop_back();
                right--;
            }
            //if element at left position is not equal move ahead by 1 position
            else
                left++;
        }
        //as the front portion of the array has all required elements
        return right+1;
    }
};