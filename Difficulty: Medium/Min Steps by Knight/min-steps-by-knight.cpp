class Solution {
  public:
  
    bool check(int i,int j,int n)
    {
        return i>0 && j>0 &&i<=n&&j<=n;
    }
    
    int minStepToReachTarget(vector<int>& knightPos, vector<int>& targetPos, int n) {
        // Code here
        vector<vector<int>>visit(n+1,vector<int>(n+1,0));
        
        int arr1[]={-2,-2,2,2,-1,1,-1,1};
        int arr2[]={-1,1,-1,1,-2,-2,2,2};
        queue<pair<pair<int,int>,int>>q;
        
        q.push({{knightPos[0],knightPos[1]},0});
        visit[knightPos[0]][knightPos[1]]=1;
        
        int u,v,step=0;
        while(!q.empty())
        {
            u=q.front().first.first;
            v=q.front().first.second;
            step=q.front().second;
            q.pop();
            
            if(u==targetPos[0]&&v==targetPos[1])
            return step;
            
            for(int i=0;i<8;i++)
            {
                if(check(u+arr1[i],v+arr2[i],n) && !visit[u+arr1[i]][v+arr2[i]])
                {
                    visit[u+arr1[i]][v+arr2[i]]=1;
                    q.push({{u+arr1[i],v+arr2[i]},step+1});
                }
            }
        }
        return -1;
    }
};