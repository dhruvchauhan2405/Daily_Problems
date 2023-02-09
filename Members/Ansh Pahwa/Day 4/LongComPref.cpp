#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    { 
        
        long long int  val=1,k = 0, x=1, t = strs.size();
        size_t temp = INT64_MAX;
        for (int i = 0; i < t; i++)
        {
            temp = min(temp, strs[i].size());
        }

        for(int i=0;i<temp;i++){
            for(int j=1;j<t;j++){
            
                if(strs[j-1][i]!=strs[j][i]){
                    val=0;
                }
            }
            
            if(val==0){
            break;}
            else
            k=i+1;
            
        }
        if(k>=1)
        strs.push_back(strs[0].substr(0,k));
        else
        strs.push_back("");

        return strs[t];
    }
};
int main()
{
    Solution a;
    vector<string> str = {"aabty", "aabnu","abty", "abnua","a"};
    cout << a.longestCommonPrefix(str);

    return 0;
}