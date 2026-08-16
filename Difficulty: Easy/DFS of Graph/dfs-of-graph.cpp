class Solution {
  public:
  
    void fun(int node,vector<int>&ans,vector<bool>&visited,vector<vector<int>>& adj)
    {
        if(visited[node])
        return;
        
        visited[node]=1;
        ans.push_back(node);
        
        for(int i=0;i<adj[node].size();i++)
        {
            fun(adj[node][i],ans,visited,adj);
        }
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        vector<int>ans;
        vector<bool>visited(adj.size(),0);
        fun(0,ans,visited,adj);
        
        return ans;
    }
};