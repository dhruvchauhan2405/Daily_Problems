class Solution {
    public int lengthOfLastWord(String s) {
        int len = 0, tail = s.length() - 1;
        while (tail >= 0 && s.charAt(tail) == ' ') tail--; //loop till you reach valid char

        //loop till you reach another space again and increment length
        while (tail >= 0 && s.charAt(tail) != ' ') {
            len++;
            tail--;
        }
        return len;
    }
}