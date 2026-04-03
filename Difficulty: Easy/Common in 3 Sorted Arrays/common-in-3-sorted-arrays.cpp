class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
        // Code Here
        int i = 0, j = 0, k = 0;
        vector<int> result;

        while (i < arr1.size() && j < arr2.size() && k < arr3.size()) {
            if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
                result.push_back(arr1[i]);

                int val = arr1[i];
                while (i < arr1.size() && arr1[i] == val) i++;
                while (j < arr2.size() && arr2[j] == val) j++;
                while (k < arr3.size() && arr3[k] == val) k++;
            }
            else if (arr1[i] < arr2[j]) {
                i++;
            }
            else if (arr2[j] < arr3[k]) {
                j++;
            }
            else {
                k++;
            }
        }

        if (result.empty()) return {-1};
        return result;
    }
};