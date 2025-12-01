class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& nums) {
        // code here
         stack<int>st;
        vector<int>ans(nums.size());
        int i=0;
        while(i<nums.size()){
            if(st.size()==0) st.push(i);
            else
            {
                if(nums[st.top()]>=nums[i])
                {
                    st.push(i);
                }
                else
                {
                    while(st.size() && nums[st.top()]<nums[i])
                    {
                        ans[st.top()]=nums[i];
                        st.pop();
                    }
                    st.push(i);
                }
            }
            i++;
        }
        while(st.size())
        {
            ans[st.top()]=-1;
            st.pop();
        }
        return ans;
    }
};