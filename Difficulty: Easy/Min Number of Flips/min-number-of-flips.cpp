class Solution {
  public:
    int minFlips(string& s) {
        // code here
        int flag=0;
        int count1=0;
        int count2=0;
        
        for(int i=0;i<s.size();i++)
        {
            if((s[i]-'0')!=flag)
            count1++;
            flag=!flag;
        }
        
        flag=1;
        for(int i=0;i<s.size();i++)
        {
            if((s[i]-'0')!=flag)
            count2++;
            flag=!flag;
        }
        return min(count1,count2);
    }
};
