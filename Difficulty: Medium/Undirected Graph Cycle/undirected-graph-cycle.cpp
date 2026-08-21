class Solution {
  public:
  
    bool DFS(int node,int parent,vector<int>&visit,vector<vector<int>>&adj)
    {
        visit[node]=1;
        
        for(int i=0;i<adj[node].size();i++)
        {
            if(!visit[adj[node][i]])
            {
                if(DFS(adj[node][i],node,visit,adj))
                return 1;
            }
            else
            {
                if(adj[node][i]!=parent)
                return 1;
            }
        }
        return 0;
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        
        vector<int>visit(V,0);
        vector<vector<int>>adj(V);
        
        for(auto edge:edges){
            int start = edge[0];
            int end = edge[1];
            adj[start].push_back(end);
            adj[end].push_back(start);
        }
        
        for(int i=0;i<V;i++)
        {
            if(!visit[i])
            {
                if(DFS(i,-1,visit,adj))
                return true;
            }
        }
        return false;
    }
};