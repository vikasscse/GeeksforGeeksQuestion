class Solution {
  public:
    vector<int> deleteElement(vector<int>& arr, int k) {
        // complete the function
        stack<int> st;
        int n=arr.size();
    vector<int> ans;
    int count =0;
    
    for(int i=0;i<n;i++)
    {
        while(!st.empty() && st.top()<arr[i] && count<k)
        {
            st.pop();
            count++;
        }
        
        st.push(arr[i]);
    }
    
    while(!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    
    reverse(ans.begin(),ans.end());
    
    return ans;
    }
};