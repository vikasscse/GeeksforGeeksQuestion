class Solution {
  public:
    void binSort(vector<int> &arr) {
        // code here
         int countZero=0;
        int countOne=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                countZero++;
            }
            else{
                countOne++;
            }
        }
        for(int i=0;i<countZero;i++){
            arr[i]=0;
        }
        for(int i=countZero;i<arr.size();i++){
            arr[i]=1;
        }
    }
};
