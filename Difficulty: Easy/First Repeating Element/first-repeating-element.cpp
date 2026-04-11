class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
        // code here
         unordered_map<int,int> freq;
        for(int x : arr)
            freq[x]++;
        for(int i = 0; i < arr.size(); i++)
        {
            if(freq[arr[i]] > 1)
                return i + 1;
        }

        return -1;
    }
};