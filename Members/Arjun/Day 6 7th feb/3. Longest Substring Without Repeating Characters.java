class Solution {
    public int lengthOfLongestSubstring(String s) {

        int max=0;
        Set<Character> set=new HashSet<>();
        for(int i=0;i<s.length();i++){
            set.add(s.charAt(i));
            for(int j=i+1;j<s.length();j++){
                if(set.contains(s.charAt(j))) 
                    break;
                else
                    set.add(s.charAt(j));
            }

            if(set.size()>max) max=set.size();
            set.clear();
        }
        return max;
    }
}