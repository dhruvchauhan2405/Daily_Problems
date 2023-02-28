class Solution {
    public int[] plusOne(int[] digits) {

        int n = digits.length;
        for(int i=n-1; i>=0; i--) {
            if(digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            // if digits[i]==9 make corresponding value 0
            digits[i] = 0;
        }
        // handle the case where all digits are 9
        int[] newNumber = new int [n+1];
        newNumber[0] = 1;

        return newNumber;
    }
}