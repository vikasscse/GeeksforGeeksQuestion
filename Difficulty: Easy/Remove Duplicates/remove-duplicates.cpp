// User function template for C++
class Solution {
  public:

    string removeDups(string &s) {
        // Your code goes here
    vector<bool> ans(26, false);
    string ans1 = "";

    for (char c : s) {
        if (!ans[c - 'a']) {
            ans1 += c;
            ans[c - 'a'] = true;
        }
    }
    return ans1;
    }
};