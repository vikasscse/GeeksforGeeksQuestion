class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
    //     int n=s.size();
    //     char y[n];
    //     for(int i=0;i<n;i++){
    //         y[i]=s[i];
    //     }
    //     int start=0;
    //     int end=n-1;
    //   while(start<end){
    //       int temp=s[start];
    //       s[start]=s[end];
    //       s[end]=temp;
    //       start++;
    //       end--;
    //   }
    //   for(int i=0;i<n;i++){
    //       if(y[i]!=s[i])
    //       return false;
    //   }
    //   return true;
    int i=0;int j=s.size()-1;
    while(i<j)
    {
        if(s[i]!=s[j]) return false;
        else i++;
        j--;
    }
    return true;
    }
};