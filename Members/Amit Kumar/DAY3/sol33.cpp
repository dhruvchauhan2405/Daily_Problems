class Solution {
public:
    string addBinary(string a, string b) {
        string res = a.size()>b.size()?a:b;
        string str = a.size()>b.size()?b:a;
        bool carry=false;
        int i=str.size()-1;    
        int j=res.size()-1;
        while (i>=0){
            if (res[j]=='1' && str[i]=='1'){res[j]=carry?'1':'0';carry=true;i--;j--;continue;}
            if (res[j]=='0' && str[i]=='0'){res[j]=carry?'1':'0';carry=false;i--;j--;continue;}
            if (res[j]=='0' && str[i]=='1'){res[j]=carry?'0':'1';i--;j--;continue;}
            if (res[j]=='1' && str[i]=='0'){res[j]=carry?'0':'1';i--;j--;continue;}
        }
        while (j>=0 && carry){
            if (res[j]=='1'){res[j]='0';j--;continue;}
            if (res[j]=='0'){res[j]='1';break;}
        }
        if (j<0 && carry){ res="1"+res;}
        return res;
    }
};