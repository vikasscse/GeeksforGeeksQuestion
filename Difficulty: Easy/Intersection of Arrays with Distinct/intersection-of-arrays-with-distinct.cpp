class Solution {
  public:
    int intersectSize(vector<int> &a, vector<int> &b) {
        // code  here
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        vector<int>ans;
        int i=0,j=0;
        while(i<a.size() && j<b.size())
        {
            if(a[i]==b[j])
            {
                ans.push_back(a[i]);
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
        return ans.size();
    }
};