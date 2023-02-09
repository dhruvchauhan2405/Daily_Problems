class Solution {
public:
    int lengthOfLastWord(string s) {
       int temp=1;
        for(int i=1;i<s.size();i++){

            if(s[i-1]==' '&& s[i]!=' '){
            temp=1;
            }
            else if(s[i]!=' ')
            temp=temp+1;

        }
        return temp;
    }
};