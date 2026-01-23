// User function Template for Java

class Solution {
    static int evenlyDivides(int n) {
        // code here
        int nums = n;
        int count = 0;
            while(n > 0) {
            int digit = n % 10;
            if(digit != 0 && nums % digit == 0) {
                count++;
            }
            n = n / 10; 
        }
        return count;
    }
}

