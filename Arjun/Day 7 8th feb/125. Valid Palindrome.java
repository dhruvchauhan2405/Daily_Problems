class Solution {
    public boolean isPalindrome(String s) {
        StringBuilder sb=new StringBuilder();
        char c='0';
        for(int i=0;i<s.length();i++){
            c=s.charAt(i);
            if((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9'))
            sb.append(c);
        }
        return sb.toString().toLowerCase().equals(sb.reverse().toString().toLowerCase());
    }

}