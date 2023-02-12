class Solution {
public:
    int recursion(int n,vector<int>& memo){
        if(n<=1)return 1;
        if(memo[n] > 0)return memo[n];
        memo[n] = recursion(n-1,memo) + recursion(n-2,memo);
        return memo[n];
    }
    
    int climbStairs(int n) {
        vector <int> memo(n+1,0);
        return recursion(n,memo);
    }
};