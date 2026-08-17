//Back-end complete function Template for C++

class Solution {
  public:
  
    int fun(int i,vector<int>&cost,vector<int>&dp)
    {
        if(i>=cost.size())
        return 0;
        
        if(dp[i]!=-1)
        return dp[i];
        
        return dp[i]=cost[i]+min(fun(i+1,cost,dp),fun(i+2,cost,dp));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        // Write your code here
        vector<int>dp(cost.size(),-1);
        return min(fun(0,cost,dp),fun(1,cost,dp));
    }
};