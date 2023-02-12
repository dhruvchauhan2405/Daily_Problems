//leetcode problem 66 - Plus One

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for(int i=n-1; i>=0; i--){
            //if digit is not 9, increment by 1 and break
            if(digits[i] != 9){
                digits[i]++;
                break;
            }
            else{
                //if digit is 9, replace it with 0
                digits[i] = 0;
            }
        }
        //code to handle if all elements become 0
        if(digits[0] == 0){
            //create a new array with size 1 greater than 'n', initialize with 0
            vector<int> ans(n+1, 0);
            //make 0th element 1
            ans[0] = 1;
            //return this new array
            return ans;
        }
        return digits;
    }
};