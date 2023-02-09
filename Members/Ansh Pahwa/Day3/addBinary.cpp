#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>

using namespace std;
class Solution {
private:
            // string str;
    
public:
        string addBinary( string a, string b) {
         string str;
      
        long long int  lenA=a.length()-1,lenB=b.length()-1,carry=0;
 
    if(lenA>1||lenB>1 ) 
    {

        while(lenA>=0 ||lenB>=0){
        
            if(lenA>=0 && lenB>=0)
            {
                if(a[lenA]=='0'&&b[lenB]=='0' && carry==0)
                str.push_back('0');
                else if(a[lenA]=='0'&&b[lenB]=='0' && carry==1){
                str.push_back('1');
                carry=0;
                }
                else if(a[lenA]=='1'&&b[lenB]=='1' && carry==0){
                    str.push_back('0');
                    carry=1;
                }
                else if(a[lenA]=='1'&&b[lenB]=='1' && carry==1){
                    str.push_back('1');
                    carry=1;
                }
                else if((a[lenA]=='0'&&b[lenB]=='1' ||a[lenA]=='1'&&b[lenB]=='0') && carry==0)
                str.push_back('1');
                else if((a[lenA]=='1'&&b[lenB]=='0' ||a[lenA]=='0'&&b[lenB]=='1' )&& carry==1){
                str.push_back('0');
                carry=1;
                }
            
            }
            else if(lenA>=0 )
            {
                if(a[lenA]=='0' && carry==0)
                str.push_back('0');
                else if(a[lenA]=='0'&& carry==1){
                str.push_back('1');
                carry=0;
                }
                else if(a[lenA]=='1' && carry==0){
                    str.push_back('1');
                    carry=0;
                  
                }
                else if(a[lenA]=='1' && carry==1){
                    str.push_back('0');
                    carry=1;
                }
            }
            else if(lenB>=0 )
            {
                if(b[lenB]=='0' && carry==0)
                str.push_back('0');
                else if(b[lenB]=='0'&& carry==1){
                str.push_back('1');
                carry=0;
                }
                else if(b[lenB]=='1' && carry==0){
                    str.push_back('1');
                  carry=0;
                }
                else if(b[lenB]=='1' && carry==1){
                    str.push_back('0');
                    carry=1;
                }
           
            }
            lenA=lenA-1;
            lenB=lenB-1;
        }
    }
      
    else if(a[0]=='1'&&b[0]=='0')
    str.push_back('1');
    else if(a[0]=='0'&&b[0]=='1')
    str.push_back('1');
    else if(a[0]=='0'&&b[0]=='0')
    str.push_back('0');

    else if(a[0]=='1'&&b[0]=='1'){
    str.push_back('0');
    carry=1;
    }
    if(carry==1)
    str.push_back('1');    
    reverse(str.begin(),str.end());

    return str;     
    }
};
int main(){
Solution a;

cout<<a.addBinary("0","1");
return 0;
}