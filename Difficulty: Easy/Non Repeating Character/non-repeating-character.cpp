
class Solution {
  public:
    char nonRepeatingChar(string &s) {
      int arr[26]={0};
      for(int i=0;i<s.size();i++)
      {
          int index=s[i]-'a';
          arr[index]++;
      }
      for(int i=0;i<s.size();i++)
      {
          if(arr[s[i]-'a']==1)
          {
              return s[i];
          }
      }
      return '$';
        
    }
};