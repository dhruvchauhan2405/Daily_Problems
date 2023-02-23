// leetcode problem 69 - Sqrt(x)

// solution using linear search

class Solution
{
public:
    int mySqrt(int x)
    {
        if (x == 0)
            return 0; // if input is 0 then return 0
        else
        {                // input not 0
            int ans = 1; // initialize ans with 1
            while (ans <= x / ans)
                ans++; // increase ans if ans*ans<=x as sqrt(x)<=x
            return ans - 1;
        }
    }
};