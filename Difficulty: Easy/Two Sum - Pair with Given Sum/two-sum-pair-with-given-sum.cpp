class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
         unordered_set<int> seen;

        for (int x : arr) {
            int needed = target - x;

            if (seen.count(needed)) {
                return true;
            }

            seen.insert(x);
        }

        return false;
    }
};