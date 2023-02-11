class Solution {
    public int climbStairs(int n) {
        //0 1 1 2 3 5 8 13 21 34 55... Fabnocii series

        int a=1,b=2,res=0;

        if(n==1) return 1;

        if(n==2) return 2;

        for(int i=2;i<n;i++){
            res=a+b;
            a=b;
            b=res;
        }

        return res;  
    }
    
}