#include<iosteam>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        int j=nums.size()-1;
        
        while(i<=j){
            if(nums[i]==val)
            {
                if(nums[j]==val){
                    j--;
                    continue;
                }
                else{
                    swap(nums[i],nums[j]);
                    i++;
                }
            }
            else{
                i++;
            }
        }
                         return i;
        
    }
};