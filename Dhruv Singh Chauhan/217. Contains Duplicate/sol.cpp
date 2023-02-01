class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> count;
        for(int i=0;i<nums.size();i++){
            if(count[nums[i]]==0){
                count[nums[i]]=1;
            }
            else{
                count[nums[i]]++;
            }
        }
        unordered_map<int,int>:: iterator it = count.begin();
        while(it!=count.end()){
            cout<<it->first<<" "<<it->second<<endl;
            if(it->second>=2){
                return true;
            }
            it++;
        }
        return false;
    }
};