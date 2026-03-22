class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n=arr.size()-1;
        int sum=0;
        int maxSum=0;
        int j=0;
        while(j<k)
        {
            sum+=arr[j];
            j++;
        }
        maxSum=sum;
        for(int i=0;i<=n-k;i++)
        {
            sum=sum-arr[i]+arr[j];
            maxSum=max(maxSum,sum);
            j++;
        }
        return maxSum;
    }
};