class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        vector<int> ans;
        if(tomatoSlices%2!=0|| tomatoSlices<cheeseSlices)
        {
            return ans;
        }
        
        
        int x = tomatoSlices/2 - cheeseSlices;
        int y = cheeseSlices - x;
        if(x<0 || y<0)
            return ans;
        ans.push_back(x);
        ans.push_back(y);
        return ans;
        
    }
};