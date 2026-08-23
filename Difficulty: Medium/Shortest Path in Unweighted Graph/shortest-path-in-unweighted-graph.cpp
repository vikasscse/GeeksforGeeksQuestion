class Solution {
  public:
    int shortestPath(int V, vector<vector<int>> &edges, int src, int dest) {
        // code here
        vector<vector<int>> adj(V);
        vector<int>dist(V);
        
        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        
        for(int i=0;i<V;i++)
        {
            dist[i]=-1;
        }
        
        dist[src]=0;
        
        queue<pair<int,int>>q;
        q.push({src,0});
        
        int i,step;
        
        while(!q.empty())
        {
            i=q.front().first;
            step=q.front().second;
            q.pop();
            
            for(int k=0;k<adj[i].size();k++)
            {
                if(dist[adj[i][k]]==-1)
                {
                    q.push({adj[i][k],step+1});
                    dist[adj[i][k]]=step+1;
                }
            }
        }
        return dist[dest];
    }
};
