class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    int temp=0,n=digits.size()-1;

        if(digits[n]+1>9)
        {
         
            for(int i=digits.size()-1;i>=0;i--)
            {

                if(digits[i]==9 )
                {
                    
                    temp++;
                }
                if(digits[i]+1>9 )
                {
                    
                    digits[i]=0;
                }

                else if(digits[i]+1>9 && digits[i-1]!=9){
                    digits[i]=0;
                    temp=0;
                }

          
                else if(digits[i]<9)
                {
                    digits[i]=digits[i]+1;
                    break;
                }
            }
        
                if(temp==n+1){
                digits.push_back(0);
                digits[0]=1;
                }
           
        }


      
   
        else
           digits[n]=digits[n]+1;
        
    
      
      
    return digits;
    }
};