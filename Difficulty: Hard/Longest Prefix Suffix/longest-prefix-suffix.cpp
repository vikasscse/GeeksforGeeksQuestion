class Solution {
  public:
    int getLPSLength(string &s) {
        // code here
        int LPS[s.size()+1];
        char temp[s.size()+1];
        
        for(int i=0;i<s.size();i++)
        {
            temp[i+1]=s[i];
            LPS[i]=0;
        }
        LPS[s.size()]=0;
        
        int first=0;
        int second=2;
        
        while(second<=s.size())
        {
            //if match
            if(temp[first+1]==temp[second])
            {
                LPS[second]=first+1;
                first++;
                second++;
            }
            else
            {
                if(first!=0)
                {
                    first=LPS[first];
                }
                else
                second++;
            }
        }
        return LPS[s.size()];
    }
};