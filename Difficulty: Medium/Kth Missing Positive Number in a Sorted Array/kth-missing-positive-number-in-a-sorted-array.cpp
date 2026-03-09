class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        // code here
         int count=0;
        int pos=0;
        for(int i=1; ;i++)
        {
            if(pos<arr.size() && i==arr[pos])
            pos++;
            else
            {
                count++;
                if(count==k)
                {
                return i;
                }
            }
        }
        return 1;
    }
};