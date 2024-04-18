class Solution {
public:
    void solve(vector<vector<int>>& grid,int n,int m,int i,int j,int &ans)
    {
        if(i<0|| i>=n || j>=m || j<0|| grid[i][j]==0)
        {
        ans++;
        return ;
        }

        if(grid[i][j]==-1)
        return ;

        grid[i][j]=-1;

       

        solve(grid,n,m,i-1,j,ans);
        solve(grid,n,m,i+1,j,ans);
        solve(grid,n,m,i,j-1,ans);
        solve(grid,n,m,i,j+1,ans);
    }
    int islandPerimeter(vector<vector<int>>& grid) {

        int n=grid.size();
        int m=grid[0].size();
        int ans=0;

       for(int i=0;i<n;i++)
       {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]==1)
            {
                solve(grid,n,m,i,j,ans);
                return ans;
            }
        }
       }

       return -1;
        
    }
};
