class Solution {
  public:
    int searchInsertK(vector<int> &arr, int k) {
        // code here
        int index=-1;
        int start=0,end=arr.size()-1;
        int mid;
        
        while(start <= end)
        {
            mid=start+(end-start)/2;
            if(arr[mid]==k)
            return mid;
            
            else if(arr[mid] > k)
            {
                end=mid-1;
                index=mid;
            }
            else
            {
                start=mid+1;
                index=mid+1;
            }
        }
        return index;
    }
};