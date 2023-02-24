// leetcode problem 14 - Longest Common Prefix

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        sort(strs.begin(), strs.end()); // sort the strings
        int start = 0, end = strs.size() - 1;
        int count = 0;
        // compare first and last strings
        for (int i = 0; i < strs[start].size(); i++)
        {
            if (strs[start][i] != strs[end][i])
                break;
            count++;
        }
        return strs[start].substr(0, count);
    }
};