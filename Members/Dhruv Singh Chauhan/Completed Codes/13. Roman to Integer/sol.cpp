class Solution {
public:
    int romanToInt(string s) {
        map<char,int> map;
        map['I']=1;
        map['V']=5;
        map['X']=10;
        map['L']=50;
        map['C']=100;
        map['D']=500;
        map['M']=1000;
        int sum=0;
        for(int i=s.length()-1;i>=0;i--){
            if(i==s.length()-1){
                sum = sum + map[s[i]];
            }
            else if(map[s[i]]<map[s[i+1]]){
                sum = sum-map[s[i]];
            }
            else{
                sum= sum+map[s[i]];
            }
        }
        return sum;
    }
};