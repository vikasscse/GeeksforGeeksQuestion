class Solution {
  public:
  
    int isvowel(char ch)
    {
        ch=tolower(ch);
        return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
    }
    string modify(string& s) {
        // code here.
        int i=0;
        int j=s.size()-1;
        
        while(i<j)
        {
            while(i<j && !isvowel(s[i]))
            i++;
            
            while(i<j && !isvowel(s[j]))
            j--;
            
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
    }
};
