class Solution {
  public:
    string reverse(const string& S) {
        // code here
        stack<char>s;
        string ans;
        
        for(int i=0;i<S.size();i++)
        {
            s.push(S[i]);
        }
        while(!s.empty())
        {
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
    }
};