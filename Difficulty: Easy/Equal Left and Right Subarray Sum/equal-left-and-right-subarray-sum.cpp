class Solution {
  public:
    int equalSum(vector<int> &arr) {
        // code here
        int total = 0;
        for(int x : arr) total += x;
        int leftSum = 0;

        for(int i = 0; i < arr.size(); i++) {
            int rightSum = total - arr[i] - leftSum;

            if(leftSum == rightSum) {
                return i;
            }

            leftSum += arr[i];
        }

        return -1;
    }
};
