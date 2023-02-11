#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        long long int i = 1, k = 1, x, t = strs.size();
        size_t temp = INT64_MAX;
        for (i = 0; i < t; i++)
        {
            temp = min(temp, strs[i].size());
        }
        i = 1;

        while (temp-- != -1)
        {

            x = 0;
            while (i < t)
            {
                if (strs[i - 1].length() >= k && strs[i].length() >= k)
                {

                
                    if (strs[i - 1].substr(0, k) == strs[i].substr(0, k))
                    {
                        x = x + 1;
                    }
                    else
                        break;
                    i = i + 1;
                }
                else
                    break;
            }
            if (x == t - 1)
            {
                k = k + 1;
                i = 1;
            }
            else
            {
                k = k - 1;
                break;
            }
        }

        if (t > 1)
        {
            if (k > 0)
                strs.push_back(strs[0].substr(0, k));
            else
                strs.push_back("");
        }
        else
            strs.push_back(strs[0]);

        return strs[t];
    }
};
int main()
{
    Solution a;
    vector<string> str = {"aabty", "aabnu","abty", "abnua","a"};
    cout << a.longestCommonPrefix(str);

    return 0;
}