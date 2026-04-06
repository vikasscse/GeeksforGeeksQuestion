

class Solution {
  public:
    long long countSubArrayProductLessThanK(const vector<int>& arr, int n,
                                            long long k) {
                                                
                                            
                                            int first=0;
    int second=0;
    long long product=1;
    long long count=0;
    
    if(k<=1) return 0;
    
    while(second < arr.size())
    {
        product*=arr[second];
        
        while(product >= k)
        {
            product/=arr[first];
            first++;
        }
        count+=(second-first+1);
        second++;
    }
    return count;
 }
                                            
                                            
    
};