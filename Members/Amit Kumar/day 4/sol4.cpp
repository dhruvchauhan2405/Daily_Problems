class Solution {
public:
       string findpref(string ans,string check){
           if(ans.size()>check.size())
           swap(ans,check);
           string ok="";
           for(int i=0;i<check.size();i++){
               if(ans[i]==check[i])
               ok=ok+(char)ans[i];
               else
               break;
           }
           return ok;
       }
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        int n=strs.size();
        for(int i=1;i<n;i++){
            ans=findpref(ans,strs[i]);
        }
        return ans;    
    }
};