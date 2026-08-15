class Solution {
  public:
  
    int fun(int i,int &ans, vector<int>&arr)
    {
        if(i==arr.size())
        return ans;
        
        if(arr[i]>ans)
        ans=arr[i];
        
        return fun(i+1,ans,arr);
    }
    int largest(vector<int> &arr) {
        // code here
        int ans=0;
        fun(0,ans,arr);
        return ans;
    }
};
