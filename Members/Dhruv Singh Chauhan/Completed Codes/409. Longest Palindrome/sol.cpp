class Solution {
public:
    int longestPalindrome(string s) {
        int l = s.length();
        unordered_map<char,int> count;
        for(int i=0;i<l;i++){
            // char ch=s[i];
            if(count[s[i]]==0){
                count[s[i]]=1;
            }
            else{
                count[s[i]]++;
            }
        }
        int c=0;
        unordered_map<char,int>:: iterator it = count.begin();
        while(it!=count.end()){
            cout<<it->first<<" "<<it->second<<endl;
            c=c+ (it->second/2);
            it++;
        }
        if(2*c<l){
            return 2*c+1;
        }
        return 2*c;
    }
};