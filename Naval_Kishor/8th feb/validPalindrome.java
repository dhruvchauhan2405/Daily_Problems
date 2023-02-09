class Solution {
    private boolean isValid(char ch){
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
            return true; 
        }
        return false; 
    }
    
    private boolean checkPalindrome(String a){
        int st= 0; 
        int end = a.length()-1;
        while(st<=end){
            if(a.charAt(st)!=a.charAt(end)){
                return false; 
            }else{
                st++;
                end--;
            }
            
        }
         return true;
    }
    public boolean isPalindrome(String s) {
        String temp = "";
        int j = 0;
        for(int i = 0 ;i<s.length();i++){
            if(isValid(s.charAt(i))){
                temp += s.charAt(i);
                j++;
            }
        }
       temp = temp.toLowerCase();
        return checkPalindrome(temp);
    }
}