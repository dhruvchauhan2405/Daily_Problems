class Solution {
public:
    bool isValid(string s) {
        stack<char> sta;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' ){
                sta.push(')');
            }
            else if(s[i]=='{'){
                sta.push('}');
            }
            else if(s[i]=='['){
                sta.push(']');
            }
            else{
                if(sta.empty())return false;
                if(s[i]==sta.top()){
                    sta.pop();
                }
                else
                return false;
            }
        }
        if(sta.empty())
        return true;
        return false;
    }
};