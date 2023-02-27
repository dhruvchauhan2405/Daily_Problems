class Solution {
public:
    string customSortString(string order, string s) {
        int a[26]={0};
        int b[26]={0};
        string p="";
        for(int i=0;i<order.length();i++){
            int value=order[i]-'a';
            a[value]++;
        }
        for(int i=0;i<s.length();i++){
            int value=s[i]-'a';
            b[value]++;
        }
        for(int i=0;i<order.length();i++){
            int value = order[i]-'a';
            if(a[value]==1 && b[value]>=1){
                p.push_back(value+'a');
                b[value]--;
            }
            while(b[value]!=0){
                p.push_back(value+'a');
                b[value]--;
            }
            
        }
        for(int i=0;i<26;i++){
                while(b[i]!=0){
                    p.push_back(i+'a');
                    b[i]--;
                }            
            // if(b[i]!=0){
            //     p.push_back(i+'a');
            // }
        }
        return p;
    }
};
