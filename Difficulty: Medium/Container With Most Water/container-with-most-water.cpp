class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int left=0;
        int right=arr.size()-1;
        int ans=0;
        
        while(left < right)
        {
            ans=max(ans,(right-left)*min(arr[left],arr[right]));
            
            if(arr[left]<arr[right])
            left++;
            else
            right--;
        }
        return ans;
    }
};