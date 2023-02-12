class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum=0,rightsum=0;
        int sum=0;
        for(int i =0;i<nums.size();i++){
            sum= sum+nums[i];
        }
        rightsum =sum;
        for(int i=0;i<nums.size();i++){
            if(i==0){
                leftsum=0;
            }
            else{
                leftsum= leftsum+ nums[i-1];
            }
            rightsum= rightsum-nums[i];   
            
            cout<<leftsum<<" "<<rightsum<<endl;
            if(leftsum == rightsum)
            return i;
            
        }
        return -1;
    }
};