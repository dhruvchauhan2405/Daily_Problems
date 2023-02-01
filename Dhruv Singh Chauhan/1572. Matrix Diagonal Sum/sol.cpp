class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat[0].size()-1;
        long int sum=0;
        int i=0;
        for(int i=0,j=n;i<=n;i++,j--){
            if(i==j){
                sum = sum+mat[i][i];
            }
            else{

            sum = sum+  mat[i][i] + mat[j][n-j];
            }
        }
        return sum;
    }
};