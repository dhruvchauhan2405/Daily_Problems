class Solution {
public:
    bool isSubsequence(string s, string t) {
        int index=0;
        int last=t.length()-1;
        int count =0;
        while(index<=last){
            char ch = s[count];

            if(t[index]==ch){
                count++;
                
            }
            index++; 
        }
        if(count==s.length())
        return true;
        else
        return false;
    }
};