class Solution {
  public:
    vector<vector<int>> printGraph(int V, vector<pair<int, int>>& edges) {
        // code here
        vector<vector<int>>adj(V);
        for(auto edge:edges)
        {
            int first = edge.first;
            int end = edge.second;
            
            adj[first].push_back(end);
            adj[end].push_back(first);
            
        }
        return adj;
    }
};