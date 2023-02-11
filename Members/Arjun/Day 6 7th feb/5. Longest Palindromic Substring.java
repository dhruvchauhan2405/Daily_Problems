class Solution {
    public String longestPalindrome(String s) {
        if(s.length()<2) return s;
        String max="";
        for(int i=0;i<s.length()-1;i++){
            for(int j=i+1;j<s.length();j++){
                if(isPalindrome(s.substring(i,j+1))){
                    if(max.length()<(j-i+1)) 
                    max=s.substring(i,j+1);
                }
            }
            if(max.length()>s.length()/2) return max;
        }
        if(max.length()==0) return s.substring(0,1);
        else
        return max;
    }

    public boolean isPalindrome(String s){
        int j=s.length()-1;
        for(int i=0;i<s.length()/2;i++){
            if(s.charAt(i)!=s.charAt(j--)) 
            return false;
        }
        return true;
    }
}