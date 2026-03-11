class Solution {
  public:
    int onesComplement(int N) {
        // code here
        int ans=0,mul=1;
        while(N>0)
        {
            int rem=N%2;
            rem=rem^1;
            ans=ans+rem*mul;
            mul=mul*2;
            N=N/2;
        }
        return ans;
    }
};