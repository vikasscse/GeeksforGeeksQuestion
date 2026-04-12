class Solution {
  public:
  
    void solve(vector<int>& arr,int i,int sum,vector<int>&ans)
    {
        if(i==arr.size())
        {
            ans.push_back(sum);
            return;
        }
        solve(arr,i+1,sum,ans);
        solve(arr,i+1,sum+arr[i],ans);
    }
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        int i=0;
        vector<int>ans;
        int sum=0;
        solve(arr,i,0,ans);
        
        return ans;
    }
};