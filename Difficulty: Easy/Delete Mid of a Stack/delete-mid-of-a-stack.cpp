class Solution {
  public:
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s) {
        // code here..
        stack<int>st;
        int n=s.size();
        int count=n/2;
        while(count--)
        {
            st.push(s.top());
            s.pop();
        }
        s.pop();
        while(!st.empty())
        {
            s.push(st.top());
            st.pop();
        }
    }
};