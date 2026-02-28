class Solution {
  public:
    int searchInsertK(vector<int> &arr, int k) {
        // code here
        int mid,start=0,end=arr.size()-1,index=INT_MIN;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(arr[mid]==k)
            return mid;
            else if(arr[mid]<k)
            {
                start=mid+1;
                index=mid+1;
            }
            else
            {
                end=mid-1;
                index=mid;
            }
        }
        return index;
    }
};