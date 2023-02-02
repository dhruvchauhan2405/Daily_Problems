class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> count;
        vector<int> temp;
        
        for(int i=0;i<nums.size();i++){

            if(count.find(target-nums[i]) != count.end()){
                temp.push_back(count[target-nums[i]]);
                temp.push_back(i);
                return temp;
            }
            count[nums[i]] = i;   
        }
        
        return temp;
    }
};