class Solution {
  public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        // code here
        vector<int>ans;
        unordered_set<int>seen;
        int i=0,j=0;
        while(i<a.size() && j<b.size())
        {
            if(a[i]==b[j])
            {
                if(seen.count(a[i]) == 0)
                {
                    ans.push_back(a[i]);
                    seen.insert(a[i]);
                }
                i++;
                j++;
            }
            else if(a[i]>b[j])
            {
                j++;
            }
            else
            {
                i++;
            }
        }
        return ans;
    }
};