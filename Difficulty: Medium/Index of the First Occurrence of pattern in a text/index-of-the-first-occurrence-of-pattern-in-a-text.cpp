// User function Template for C++

class Solution {
  public:
    int findMatching(string text, string pat) {
        // Code here
        if(pat.size() > text.size()) return -1;
        int i=0,j=0,start=0;
        
        while(j < text.size())
        {
            if(pat[i]==text[j])
            {
                if(i==0) start=j;
                i++;
                j++;
                
                if(i==pat.size()) return start;
            }
            else
            {
                if(i>0)
                {
                    j=start+1;
                    i=0;
                }
                else
                j++;
            }
        }
        return -1;
    }
};