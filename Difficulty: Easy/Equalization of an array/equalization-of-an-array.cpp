
class Solution {
  public:
    // Function to calculate the minimum number of operations required.
    long minOperations(vector<int> arr) {
        // code here
        long long sum = 0;
        int n = arr.size();
        
        for(int i = 0; i < n; i++) {
            sum += arr[i];
        }
        
        // If not divisible
        if(sum % n != 0) return -1;
        
        int target = sum / n;
        long long operations = 0;
        
        for(int i = 0; i < n; i++) {
            if(arr[i] > target) {
                operations += (arr[i] - target);
            }
        }
        
        return operations;
    }
};