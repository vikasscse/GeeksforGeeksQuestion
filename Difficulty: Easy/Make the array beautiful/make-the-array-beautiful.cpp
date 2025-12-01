// User function Template for C++

class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        stack<int>st;
        for(int i=0;i<arr.size();i++){
            if(st.empty()) st.push(arr[i]);
            else{
                if((st.top()>=0 &&arr[i]>=0) || (st.top()<0&&arr[i]<0)){
                    st.push(arr[i]);
                }
                else{
                    if(!st.empty()&&((st.top()>=0&&arr[i]<0) || (st.top()<0&&arr[i]>=0))){
                        st.pop();
                    }
                }
            }
        }
        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};