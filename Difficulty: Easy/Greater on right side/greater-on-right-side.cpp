// User function template for C++
class Solution {
  public:
    /* Function to replace every element with the
    next greatest element */
    vector<int> nextGreatest(vector<int> arr) {
        // code here
        int Relement=-1;
        for(int i=arr.size()-1;i>=0;i--){
            int current=arr[i];
            arr[i]=Relement;
            Relement=max(current,Relement);
        }
        return arr;
    }
};