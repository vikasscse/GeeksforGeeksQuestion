class Solution {
  public:
    
    bool check(int i,int j,int row,int col)
    {
        return i>-1&&i<row&&j>-1&&j<col;
    }
    
    void BFS(int i,int j,int row,int col,vector<vector<char>>& grid)
    {
        queue<pair<int,int>>q;
        q.push({i,j});
        
        int arr1[8]={-1,-1,0,1,1,1,0,-1};
        int arr2[8]={0,-1,-1,-1,0,1,1,1};
        
        int x,y;
        while(!q.empty())
        {
            x=q.front().first;
            y=q.front().second;
            q.pop();
            
            for(int k=0;k<8;k++)
            {
                if(check(x+arr1[k],y+arr2[k],row,col)&&grid[x+arr1[k]][y+arr2[k]]=='L')
                {
                    grid[x+arr1[k]][y+arr2[k]]='W';
                    q.push({x+arr1[k],y+arr2[k]});
                }
            }
        }
        
        
        
    }
    int countIslands(vector<vector<char>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int count=0;
        
        for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
        {
            if(grid[i][j]=='L')
            {
                grid[i][j]='W';
                count++;
                BFS(i,j,row,col,grid);
            }
        }
        return count;
    }
};