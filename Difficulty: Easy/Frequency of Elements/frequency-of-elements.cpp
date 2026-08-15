class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        // code here
        vector<vector<int>>ans;
        unordered_map<int,int>m;
        
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        for(auto x:m)
        {
            ans.push_back({x.first,x.second});
        }
        return ans;
    }
};