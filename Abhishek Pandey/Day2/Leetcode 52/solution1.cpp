//leetcode problem - 58 (Length of last word)


 /*
    this is a naive soultion in which we traverse the string from back to front
    and compare if the character at that index of string in ' '
    there are three condition :
        1. the character at index i is ' ' and count > 0. That is we have covered a word and    encounterd space so we break the loop.
        2. the character at index i is ' ' and count = 0. That is we have encounterd a space but no word has been traversed before as count is 0. so we continue the loop ahead.
        3. we increase the count if any of above case didn't meet. That is we encounter a non-space characeter.
*/
class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        char space = ' ';
        for(int i = s.size()-1; i>=0; i--){
            if(s[i] == ' ' && count>0)
                break;
            else if(s[i]==' ' && count==0)
                continue;
            else
                count++;
        }
        return count;
    }
};