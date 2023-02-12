//leetcode problem 66 - Plus One

vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for(int i=n-1; i>=0; i--){
            //increment if last element
            if(i == n-1)
                digits[i]++;
            //check if element is 10
            if(digits[i] == 10){
                //place 0 at that index
                digits[i] = 0;
                //if the index i is 0 we have to increase size to separate digits as
                //element was 10
                if(i == 0){
                    digits.push_back(0);
                    digits[i] = 1;
                }
                else{
                    //else case i was not 0 here increment element at (i-1)
                    digits[i-1]++;
                }
            }
        }
        return digits;
    }