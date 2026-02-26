class Solution {
  public:
    // Function to partition the array around the range such
    // that array is divided into three parts.
    void threeWayPartition(vector<int>& nums, int a, int b) {
        // code here
        vector<int>left;
        vector<int>mid;
        vector<int>right;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] < a)
            left.push_back(nums[i]);
            else if(nums[i] >= a && nums[i] <=b)
            mid.push_back(nums[i]);
            else
            right.push_back(nums[i]);
        }
        int index=0;
        for(int i=0;i<left.size();i++)
        nums[index++]=left[i];
        
        for(int i=0;i<mid.size();i++)
        nums[index++]=mid[i];
        
        for(int i=0;i<right.size();i++)
        nums[index++]=right[i];
        
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i] != left[i])
        //     return false;
        //     else return true;
        // }
    }
};