class Solution {
  public:
  
    int fun(int i,vector<int>&height,vector<int>&dp)
    {
        if(i>=height.size()-1)
        return 0;
        
        if(dp[i]!=-1)
        return dp[i];
        
        int first=abs(height[i]-height[i+1])+fun(i+1,height,dp);
        
        int second=INT_MAX;
        if(i+2<height.size())
        second=abs(height[i]-height[i+2])+fun(i+2,height,dp);
        
        return dp[i]=min(first,second);
        
        
    }
    int minCost(vector<int>& height) {
        // Code here
        vector<int>dp(height.size(),-1);
        return fun(0,height,dp);
    }
};