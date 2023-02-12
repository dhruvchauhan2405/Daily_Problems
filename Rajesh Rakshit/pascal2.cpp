class Solution {
public:
    vector<int> getRow(int rowIndex) {

        vector<vector<int>> ans;
        for(int i=0;i<=rowIndex;i++){
            vector<int>v(i+1,1);
            for(int col=1;col<i;col++){
                v[col]=ans[i-1][col-1]+ans[i-1][col];
            }
            ans.push_back(v);
        }
    vector<int> q;
        for (int i = rowIndex; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++)
      q.push_back(ans[i][j]);
    }
        return q;
    }
};
