class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        double profit=0;
        int n=val.size();
        vector<pair<double,int>>ratio;
        for(int i=0;i<n;i++)
        {
            ratio.push_back({double(val[i])/wt[i],i});
        }
        sort(ratio.begin(),ratio.end(),greater<pair<double,int>>());
        
        for(auto x:ratio)
        {
            int i=x.second;
            if(capacity>0 && wt[i]<=capacity)
            {
                capacity=capacity-wt[i];
                profit=profit+val[i];
            }
            else
            {
                profit=profit+((double)capacity/wt[i])*val[i];
                break;
            }
        }
        return profit;
    }
};
