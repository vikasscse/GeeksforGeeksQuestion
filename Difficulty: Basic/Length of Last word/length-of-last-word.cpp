// User function Template for C++

int findLength(string s) {
    
    // code
     int count=0;
        int i=s.size()-1;
        while(i>=0 && s[i]==' ') i--;
        while(i>=0 && s[i]!=' ')
        {
            count++;
            i--;
        }
        return count;
}