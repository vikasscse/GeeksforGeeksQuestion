class Solution {
  public:
  
    void dfs(int node,vector<vector<int>>& adj,vector<bool>&visited,vector<int>&ans)
    {
        if(visited[node])
        return;
        
        visited[node]=1;
        ans.push_back(node);
        
        for(int i=0;i<adj[node].size();i++)
        dfs(adj[node][i],adj,visited,ans);
        
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        vector<bool> visited(adj.size(),0);;
        vector<int>ans;
        
        dfs(0,adj,visited,ans);
        
        return ans;
    }
};