class Solution {
public:
int gcd(int a, int b){
    if(a==0)return b;
    if(b==0)return a;
    if(a>b)return gcd(a-b,b);
    return gcd(a,b-a);
}
    string gcdOfStrings(string str1, string str2) {
        int n1=str1.size();
        int n2=str2.size();
        if(str1+str2 !=str2+str1)
        return "";
        int n=gcd(n1,n2);
        string ok="";
        for(int i=0;i<n;i++){
            ok=ok+str1[i];
        }
        return ok;   
    }
};