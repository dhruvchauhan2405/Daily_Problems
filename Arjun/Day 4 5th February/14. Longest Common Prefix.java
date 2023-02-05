class Solution {
    public String longestCommonPrefix(String[] strs) {
        
        int length=Integer.MAX_VALUE;
        String min="";
        
        for(int i=0;i<strs.length;i++){
            if(strs[i].length()<length){
                min=strs[i];
                length=strs[i].length();
            }
        }
        length=0;
        boolean flag=true;
        for(int i=0;i<min.length();i++){
            flag=true;
            for(int j=0;j<strs.length;j++){
                if(strs[j].charAt(i)!=min.charAt(i)){
                    flag=false;
                    break;
                }  
            }
            if(flag) length++;
            else break;
        }
        if (length==0) return "";
        else return min.substring(0,length);
    }
}