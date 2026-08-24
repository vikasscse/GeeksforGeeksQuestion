class Solution {
  public:
  
    int fun(int i,int n,int W,vector<int>&val,vector<int>&wt,vector<vector<int>>&dp)
    {
        if(i==n || W==0)
        return 0;
        
        if(dp[i][W]!=-1)
        return dp[i][W];
        
        if(wt[i]<=W)
        {
            int take=val[i]+fun(i+1,n,W-wt[i],val,wt,dp);
            int Nottake=fun(i+1,n,W,val,wt,dp);
            
            return dp[i][W]=max(take,Nottake);
        }
        else
        return dp[i][W]=fun(i+1,n,W,val,wt,dp);
    }
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        int n=val.size();
        vector<vector<int>>dp(n+1,vector<int>(W+1,-1));
        return fun(0,n,W,val,wt,dp);
    }
};