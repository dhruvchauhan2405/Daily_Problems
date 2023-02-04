class Solution {
public:
    string addBinary(string a, string b) {
       string s;
     int i, k=a.length()-1,j=b.length()-1,carry=0;
     if(k>j)
     i=k;
     else
     i=j;
        for(int i=i;i>=0;i--){
            if(carry==1){
                if(a[k]=='1'&&b[k]=='0' || a[k]=='0'&&b[k]=='1'){
                    a[k]='0';
                    carry=1;
                }

                else if(a[k]=='0'&&b[k]=='0' )
                    a[k]='1';
                else if(a[k]=='1'&&b[k]=='1' ){
                    a[k]='1';
                    carry=1;
                }
            }
            else{

                if(a[k]=='1'&&b[j]=='0' || a[k]=='0'&&b[j]=='1')
                    a[k]='1';
                else if(a[k]=='0'&&b[j]=='0' )
                    a[k]='0';
                else if(a[k]=='1'&&b[j]=='1' ){
                    a[k]='0';
                    carry=1;
                }
            }  
          k=k-1;
          j=j-1;  

        }
      

        return a;
    }
};






//#######
#include<algorithm>
#include<string>

class Solution {
public:

    string addBinary(string a, string b) {
   long long  int a1=stoull(a), b1=stoull(b),carry=0;
    long long int x;
      string str; 
     if( a1>=1&&b1>=1){
        x=a1+b1;
        str=to_string(x)+" ";
     }
       else if( a1==0&&b1==0 ){
       str='0';
       x=0;
       }
       else if(  a1==1&&b1==0 || b1==1&&a1==0  ){
       str='1';
       x=0;
       }
       else if(a1>1&&b1==0){
         str=a;
       x=0;  
       }
       else if(a1==0&&b1>1){
         str=b;
       x=0;  
       }
     
    //   char rev[str.strlen()];
     int i=0;
        while(true){

            if(x!=0){


            if(x%10==2&&carry==0){
             str[i]='0';
             carry=1;

            }
            else if(x%10==2&&carry==1){
             str[i]='1';
             carry=1;

            }
          
            
            else if(x%10==0 &&carry==0)
                str[i]='0';
            else if(x%10==1&&carry==0){
                str[i]='1';
            carry=0;
            }
            else if(x%10==0&&carry==1){
                str[i]='1';
                carry=0;
            }
            else if(x%10==1&&carry==1){
                str[i]='0';
                carry=1;
            }

            
            x=x/10;
            i=i+1;
            
            if(x%10==0&&carry==1){
                str[i]='1';

            }
            }
            else if(x==0){
            break;}

        }
//    if( a1>=1&&b1>=1)
//     for (int index = 0, len = str.length(); (index < len); index++) {
//       rev[index] = str[len-1-index];
//    }
      if(str[str.length()-1]==' ')
      str.erase(str.length()-1,1);

      if((a1!=0 ) ==( b1!=0))
      reverse(str.begin(),str.end());
   
        return str;
    }
};
