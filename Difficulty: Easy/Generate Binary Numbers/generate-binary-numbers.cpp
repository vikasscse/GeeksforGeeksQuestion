class Solution {
  public:
    vector<string> generateBinary(int n) {
        // code here
         vector<string> ans;
        for(int i=1;i<=n;i++)
        {
            int num = i;
            string s = "";
            while(num > 0)
            {
                s = char('0' + (num % 2)) + s;
                num /= 2;
            }
            ans.push_back(s);
        }
        
        return ans;
    }
};