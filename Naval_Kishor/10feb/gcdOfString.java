class Solution {
   public static int gcd(int n1,int n2){
        if(n2==0){
            return n1;
        }
        return gcd(n2,n1%n2);
        // if(n2==0){
        //     return n1;
        // }
        // while(n1!=n2){
        //     if(n1>n2){
        //         n1=n1-n2;
        //     }else{
        //         n2=n2-n1;
        //     }
        // }
        // return n1;

        }
    
    public String gcdOfStrings(String str1, String str2) {
        int str1size = str1.length();
        int str2size = str2.length();
        if(!(str1+str2).equals(str2+str1)){
            return "";
        }
        int subStringSize = gcd(str1size,str2size);
        return str2.substring(0,subStringSize);
    }
}
