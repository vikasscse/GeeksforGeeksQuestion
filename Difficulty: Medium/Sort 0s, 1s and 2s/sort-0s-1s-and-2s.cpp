class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int countZero=0,countOne=0,countTwo=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0) countZero++;
            else if(arr[i]==1) countOne++;
            else countTwo++;
        }
        for(int i=0;i<countZero;i++){
            arr[i]=0;
        }
        for(int i=countZero;i<countZero+countOne;i++){
            arr[i]=1;
        }
        for(int i=countZero+countOne;i<arr.size();i++){
            arr[i]=2;
        }
    }
};