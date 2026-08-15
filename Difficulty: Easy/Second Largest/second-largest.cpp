class Solution {
  public:
  
    // int fun(int i,int &temp,int &ans,vector<int>arr)
    // {
    //     if(i==arr.size())
    //     return ans;
        
    //     if(arr[i]>temp)
    //     {
    //         ans=temp;
    //         temp=arr[i];
    //     }
    //     else if(arr[i]<temp && arr[i]>ans)
    //     {
    //         ans=arr[i];
    //     }
        
    //     return fun(i+1,temp,ans,arr);
        
    // }
    int getSecondLargest(vector<int> &arr) {
        // code here
        // int temp=-1;
        // int ans=-1;
        
        // fun(0,temp,ans,arr);
        // return ans;
        
        int largest=-1;
        int secondlargest=-1;
        
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>largest)
            {
                secondlargest=largest;
                largest=arr[i];
            }
            else if(arr[i]<largest && arr[i]>secondlargest)
            secondlargest=arr[i];
        }
        return secondlargest;
    }
};