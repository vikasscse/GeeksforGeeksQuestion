class Solution {
  public:
    
    void fun(int i,int j,vector<int>&arr)
    {
       if(i>=j)
       return;
       
       swap(arr[i++],arr[j--]);
       fun(i,j,arr);
      
    }
    void reverseArray(vector<int> &arr) {
        // code here
        fun(0,arr.size()-1,arr);
    }
};