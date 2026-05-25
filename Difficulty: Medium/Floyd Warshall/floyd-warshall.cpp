// User function template for C++

class Solution {
  public:
    void floydWarshall(vector<vector<int>> &dist) {
        // Code here
        int n=dist.size();
        int temp=100000000;
        for(int k=0;k<n;k++)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(dist[i][k]==temp || dist[k][j]==temp)
                    continue;
                    else dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
                }
                
            }
        }
    }
};