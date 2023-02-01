class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> count;
        for(int i=0;i<nums.size();i++){
            if(count[nums[i]]==0){
                count[nums[i]]=1;
            }
            else{
                count[nums[i]]++;
            }
        }
        unordered_map<int,int>:: iterator it= count.begin();
        while(it!=count.end()){
            if(it->second>=2){
                return it->first;

            }
            it++;
        }
        return -1;
    }
};