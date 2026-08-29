class Solution {
  public:
  
    bool DFS(int node,vector<int>&visit,vector<int>&path,vector<vector<int>>&adj)
    {
        visit[node]=1;
        path[node]=1;
        
        for(int i=0;i<adj[node].size();i++)
        {
            if(!visit[adj[node][i]])
            {
                if(DFS(adj[node][i],visit,path,adj))
                return 1;
            }
            else
            if(path[adj[node][i]])
            return 1;
        }
        path[node]=0;
        
        return 0;
    }
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        vector<int>visit(V,0);
        vector<int>path(V,0);
        
        vector<vector<int>>adj(V);
        
        for(int i=0;i<edges.size();i++)
        {
            int u=edges[i][0];
            int v=edges[i][1];
            
            adj[u].push_back(v);
        }
        
        for(int i=0;i<V;i++)
        {
            if(!visit[i])
            {
                if(DFS(i,visit,path,adj))
                return 1;
            }
        }
        return 0;
    }
};