// leetcode problem 14 - Longest Common Prefix

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string minstr;
        int minLen = INT_MAX;
        int count = 0;
        // calculating minimum string
        for (int i = 0; i < strs.size(); i++)
        {
            int length = strs[i].length();
            if (length < minLen)
            {
                minLen = length;
                minstr = strs[i];
            }
        }
        // using minStr as reference for comparison with other string
        for (int i = 0; i < minLen; i++)
        {
            for (int j = 0; j < strs.size(); j++)
            {
                if (strs[j][i] != minstr[i])
                    return minstr.substr(0, count);
            }
            count++;
        }
        return minstr.substr(0, count);
    }
};