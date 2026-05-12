class Solution {
  public:
    int solve(int n, vector<int>&dp)
    {
        if(n==1)
        return 1;
        
        if(dp[n] != -1)
        return dp[n];
        
        return dp[n]=n*solve(n-1,dp);
    }
    int factorial(int n) {
        // code here
        vector<int>dp(n+1,-1);
        return solve(n,dp);
    }
};