class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        long long rev=0;
        while(n>0)
        {
            int num=n%10;
            rev=rev*10+num;
            n/=10;
        }
        return rev;
    }
};