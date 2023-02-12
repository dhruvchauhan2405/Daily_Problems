//Leetcode Problem 27 - Remove Element

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        //valPointer keep track of the position which uptill which array has no element = val
        int Pointer = 0;

        for (int i=0; i<nums.size(); i++){
            /*
                if found an element not equal to val then swap it with the element at Pointer position and increment the Pointer            
            */
            if( nums[i] != val ){
                nums[Pointer] = nums[i]; //swap(nums[i], nums[Pointer]);
                Pointer++;
            }
        }
        return Pointer;
    }
};