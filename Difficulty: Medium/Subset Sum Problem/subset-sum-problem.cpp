class Solution {
  public:
  
    bool solve(int i,int curr,vector<int>& arr,int sum,vector<vector<int>>& dp)
    {
        if(curr == sum)
            return true;

        if(i >= arr.size() || curr > sum)
            return false;

        if(dp[i][curr] != -1)
            return dp[i][curr];

        return dp[i][curr] =
               solve(i+1,curr+arr[i],arr,sum,dp) ||
               solve(i+1,curr,arr,sum,dp);
    }
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        int ans=0;
        vector<vector<int>> dp(arr.size(),vector<int>(sum+1,-1));
        return solve(0,0,arr,sum,dp);
    }
};