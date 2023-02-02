#include<iostream>
#include<string.h>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        bool flag=false;
        int count=0;
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            if(s[i]!=' '){
                flag=true;
                count++;
            }
            else if(s[i]==' ' && flag==true){
                return count;
            }
        }
        return count;
    }
};