class Solution {
public:
      string pref(string a,string b){
          int n1=a.length();
          int n2=b.length();
      if(n1>n2)
      swap(a,b);
      string ok="";
      for(int i=0;i<n1;i++){
          if(a[i]==b[i])
          ok=ok+a[i];
      }
      return ok;
      }
      int gcd(int a,int b){
          if(a==0)
              return b;
              if(b==0)
              return a;
              if(a==b)
              return a;
              if(a>b)
              return gcd(a-b,b);
              return gcd(a,b-a);
          
      }
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2 != str2+str1)
        return "";
        string ans=pref(str1,str2);
        int n=ans.size();
        int n1=str1.size();
        int n2=str2.size();
        int size=gcd(n1,n2);
        string ok="";
        for(int i=0;i<size;i++){
            ok=ok+str1[i];
        }
           return ok;
    }
};