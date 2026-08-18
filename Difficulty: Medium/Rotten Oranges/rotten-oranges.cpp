class Solution {
  public:
  
    bool check(int i,int j,int row,int col)
    {
        return i>-1 && i<row && j>-1 && j<col;
    }
    int orangesRot(vector<vector<int>>& mat) {
        // code here
        int row=mat.size();
        int col=mat[0].size();
        int count=0;
        queue<pair<pair<int,int>,int>>q;
        
        for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
        {
            if(mat[i][j]==1)
            count++;
            
            else if(mat[i][j]==2)
            {
                q.push({{i,j},0});
            }
        }
        int i,j,timer=0;
        while(!q.empty())
        {
            i=q.front().first.first;
            j=q.front().first.second;
            timer=q.front().second;
            
            q.pop();
            
            //up
            if(check(i-1,j,row,col)&&mat[i-1][j]==1)
            {
                mat[i-1][j]=0;
                count--;
                q.push({{i-1,j},timer+1});
            }
            //down
            if(check(i+1,j,row,col) && mat[i+1][j]==1)
            {
                mat[i+1][j]=0;
                count--;
                q.push({{i+1,j},timer+1});
            }
            //left
            if(check(i,j-1,row,col)&& mat[i][j-1]==1)
            {
                mat[i][j-1]=0;
                count--;;
                q.push({{i,j-1},timer+1});
            }
            //right
            if(check(i,j+1,row,col)&& mat[i][j+1]==1)
            {
                mat[i][j+1]=0;
                count--;
                q.push({{i,j+1},timer+1});
            }
        }
        if(count)
        return -1;
        
        return timer;
    }
};