class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
        vector<int>c;
        int i=0;
        int j=0;
        
        while(i<a.size() && j<b.size())
        {
            if(a[i]>b[j])
            {
                c.push_back(b[j]);
                j++;
            }
            else
            {
               c.push_back(a[i]); 
               i++;
            }
        }
        while(i<a.size())
        {
            c.push_back(a[i]);
            i++;
        }
        while(j<b.size())
        {
            c.push_back(b[j]);
            j++;
        }
        
        return c[k-1];
        
        
    }
};