class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        // code here
        if(low >= high)
        return;
        
        int index=partition(arr,low,high);
        quickSort(arr,low,index-1);
        quickSort(arr,index+1,high);
    }

  public:
    int partition(vector<int>& arr, int low, int high) {
        // code here
        int first=low;
        int second=low;
        
        while(second < high)
        {
            if(arr[second] <= arr[high])
            {
                swap(arr[first++],arr[second++]);
            }
            else second++;
        }
        swap(arr[first], arr[high]);
        return first;
    }
};