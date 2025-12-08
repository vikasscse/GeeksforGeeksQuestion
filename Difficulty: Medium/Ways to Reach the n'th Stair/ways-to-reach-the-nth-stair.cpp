class Solution {
  public:
    int countWays(int n) {
        // your code here
       int a=1,b=2,c;
       if(n<=2) return n;
       for(int i=3;i<=n;i++)
       {
           c=a+b;
           a=b;
           b=c;
       }
       return c;
    }
};
