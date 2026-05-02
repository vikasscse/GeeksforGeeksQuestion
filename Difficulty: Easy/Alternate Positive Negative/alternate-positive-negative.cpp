class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        vector<int>ans1;
        vector<int>ans2;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>=0)
            ans1.push_back(arr[i]);
            else
            ans2.push_back(arr[i]);
        }
        int i=0;
        int j=0;
        int idx=0;
        while(i<ans1.size() && j<ans2.size())
        {
            if(idx%2==0)
            arr[idx++]=ans1[i++];
            else
            arr[idx++]=ans2[j++];
        }
        while(i<ans1.size())
        arr[idx++]=ans1[i++];
        
        while(j<ans2.size())
        arr[idx++]=ans2[j++];
    }
};