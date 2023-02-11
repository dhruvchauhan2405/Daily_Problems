class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> count;
        
        for(int i=0;i<nums1.size();i++){
            count[nums1[i]]++;
        }
        
        vector<int> ans;

        for(int i=0;i<nums2.size();i++){
            auto it = count.find(nums2[i]);
            if(it!=count.end() && it->second>0){
                ans.push_back(nums2[i]);
                it->second--;
            }

        }
        return ans;
    }
};