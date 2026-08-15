class Solution {
  public:
    int mostFreqEle(vector<int>& arr) {
        // code here
        unordered_map<int,int>m;
        
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        int temp=0;
        
        for(auto x:m)
        {
            temp=max(temp,x.second);
        }
        int ans=INT_MIN;
        for(auto x:m)
        {
            if(temp==x.second)
            ans=max(ans,x.first);
        }
        return ans;
    }
};