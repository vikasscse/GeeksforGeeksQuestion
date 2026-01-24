

class Solution {
  public:
    int Pair_minimum(vector<int>& arr) {
        // Complete the functiom
        sort(arr.begin(),arr.end());
        int sum=0;
        int i=0;
        int j=arr.size()-1;
        
        while(i<j)
        {
            sum=max(sum,arr[i]+arr[j]);
            i++;
            j--;
        }
        return sum;
    }
};