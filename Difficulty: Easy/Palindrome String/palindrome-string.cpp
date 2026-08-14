class Solution {
  public:
  
    bool fun(int i,int j,string&s)
    {
        if(i>=j)
        return true;
        
        if(s[i++]!=s[j--])
        return false;
        
        fun(i,j,s);
    }
    bool isPalindrome(string& s) {
        // code here
        fun(0,s.size()-1,s);
    }
};