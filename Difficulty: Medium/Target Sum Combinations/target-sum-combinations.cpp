class Solution {
  public:
  
  void solve(vector<int>& arr, int target,vector<int>temp,vector<vector<int>>&ans,int index,int sum)
    {
        if(sum > target)
        return;
        if(sum==target)
        {
            ans.push_back(temp);
            return;
        }
        
        if(index==arr.size())
        return;

        solve(arr,target,temp,ans,index+1,sum);
        sum+=arr[index];
        temp.push_back(arr[index]);
        solve(arr,target,temp,ans,index,sum);

    }
    vector<vector<int>> targetSumComb(vector<int> &arr, int target) {
        // code here
        vector<vector<int>>ans;
        vector<int> temp;
        int sum=0;
        int index=0;
        solve(arr,target,temp,ans,index,sum);

        return ans;
    }
};