// User function Template for C++
class Solution {
  public:
    int removeConsecutiveSame(vector<string>& arr) {
        // Your code goes here
        stack<string>sc;
        int i=0;
        while(i<arr.size())
        {
            if(sc.size()==0)
            sc.push(arr[i]);
            else
            {
                if(sc.top()==arr[i])
                sc.pop();
                else sc.push(arr[i]);
            }
            i++;
        }
        return sc.size();
    }
};