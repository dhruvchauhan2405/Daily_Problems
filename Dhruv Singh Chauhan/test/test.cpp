class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        int count =0;
        for(int i=0;i<s.length();i++){
            if(s[i]!=' ' && !isdigit(s[i])){
                count++;

            }
            else if(s[i]==' ' && count==0){
                continue;
            }
            else if(s[i]==' '){
                return count;
            }
        }
        return count;
    }
};