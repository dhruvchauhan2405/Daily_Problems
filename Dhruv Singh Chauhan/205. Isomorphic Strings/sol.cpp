class Solution {
public:
    bool isIsomorphic(string s, string t) {
      unordered_map<char,char> M1;  
      unordered_map<char,char> M2;

      for(int i=0;i<s.length();i++){

          char c1=s[i];
          char c2=t[i];

          if((M1.find(c1)!=M1.end() && M1[c1] != c2)||(M2.find(c2)!=M1.end() && M2[c2] != c1)){
              return false;
          }

          M1[c1] = c2;
          M2[c2] = c1;
          

      }
      return true;  
    }
};