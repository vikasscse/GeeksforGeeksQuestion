class Solution {
  public:
    int longestUniqueSubstring(string &s) {
        // code
        set<char>st;
        int left=0,right=0,count=0;
        while(right<s.size())
        {
            if(st.count(s[right])==0)
            {
                st.insert(s[right]);
                count=max(count,right-left+1);
                right++;
            }
            else
            {
                st.erase(s[left]);
                left++;
            }
        }
        return count;
    }
};