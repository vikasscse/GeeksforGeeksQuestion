class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // Your code goes here
        int first=0,second=0;
        int index=arr.size()+1;
        int sum=0;

        while(second<arr.size())
        {
            sum+=arr[second];
            
            if(sum >= x)
            {
                while(sum > x)
                {
                    index=min(index,(second-first+1));
                    sum-=arr[first];
                    first++;
                }
            }
            second++;
        }
        if(index==arr.size()+1) return 0;
        return index;
    }
};