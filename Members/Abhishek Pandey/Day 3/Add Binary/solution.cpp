// leetcode problem 67 - Add Binary

class Solution
{
public:
    string addBinary(string a, string b)
    {
        string result;
        int carry = 0;
        int aPtr = a.length() - 1, bPtr = b.length() - 1;
        while (aPtr >= 0 || bPtr >= 0)
        {
            int sum = carry;
            if (aPtr >= 0)
                sum += a[aPtr--] - '0'; // to perform ASCII calculation as 0is30 and 1is32 in ASCII
            if (bPtr >= 0)
                sum += b[bPtr--] - '0';
            result += to_string(sum % 2);
            carry = sum / 2;
        }
        if (carry)
            result += '1';
        reverse(result.begin(), result.end());
        return result;
    }
};