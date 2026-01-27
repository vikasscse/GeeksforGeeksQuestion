
class Solution {
  public:
    int sameChar(string A, string B) {
        // code here
        int i=0;int j=0;
        int count=0;
        while(i<A.size() && j<B.size())
        {
            if(tolower(A[i])==tolower(B[j]))
            count++;
            i++;
            j++;
        }
        return count;
    }
};