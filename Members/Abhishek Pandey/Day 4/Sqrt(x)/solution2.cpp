// leetcode problem 69 - Sqrt(x)

// solution using binary search

class Solution
{
public:
    int mySqrt(int x)
    {
        int res = 0;            // initialize res with 0
        int start = 1, end = x; // start at 1 and end at x, as sqrt(x) will be less than x
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (mid <= x / mid) // if mid*mid <= x, as sqrt(x) <= x
            {
                start = mid + 1; // discard left part of mid
                res = mid;       // update res with mid
            }
            else
            {
                end = mid - 1; // else case discard right part
            }
        }
        return res;
    }
};