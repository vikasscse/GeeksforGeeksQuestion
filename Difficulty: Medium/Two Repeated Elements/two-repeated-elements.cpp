class Solution {
  public:
    vector<int> twoRepeated(vector<int>& arr) {
        // code here
        vector<int>ans;
        unordered_set<int>s;
        
        for(int i=0;i<arr.size();i++)
        {
            if(s.count(arr[i]))
            {
                ans.push_back(arr[i]);
            }
            else
            {
                s.insert(arr[i]);
            }
        }
        return ans;
    }
};
