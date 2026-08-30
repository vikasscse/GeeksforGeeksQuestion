class Solution {
  public:
  
    bool DFS(int node,int target,vector<bool>&visited,vector<vector<int>>&adj)
    {
        if(node==target)
        return true;
        
        visited[node]=1;
        
        for(int i=0;i<adj[node].size();i++)
        {
            if(!visited[adj[node][i]])
            {
                if(DFS(adj[node][i],target,visited,adj))
                return true;
            }
        }
        return 0;
    }
    bool isBridge(int V, vector<vector<int>> &edges, int c, int d) {
        // Code here
        vector<vector<int>>adj(V);
        
        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<bool>visited(V,0);
        
        for(int i=0;i<adj[c].size();i++)
        {
            if(adj[c][i]==d)
            {
                adj[c][i]=c;
                break;
            }
        }
        for(int i=0;i<adj[d].size();i++)
        {
            if(adj[d][i]==c)
            {
                adj[d][i]=d;
                break;
            }
        }
       return !DFS(c,d,visited,adj);
    }
};