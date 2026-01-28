class Solution {
  public:
    int findDuplicate(vector<int>& arr) {
        // Your code goes here
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==arr[i+1])
            return arr[i];
        }
        return 0;
    }
};
