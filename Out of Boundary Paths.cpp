class Solution {
    int M,N;
    int MOD=1e9+7;
    int t[51][51][51];
    vector<vector<int>>directions{{0,1},{0,-1},{1,0},{-1,0}};
    int solve(int startRow, int startColumn,int maxMove)
    {
        if(startRow<0 || startRow>=M || startColumn<0 || startColumn>=N)
        return 1;

        if(maxMove<=0)
        return 0;

        if(t[startRow][startColumn][maxMove]!=-1)
        return t[startRow][startColumn][maxMove];

        // int a=solve( startRow,startColumn+1,maxMove-1);
        // int b=solve(startRow,startColumn-1,maxMove-1);
        // int c=solve(startRow+1,startColumn,maxMove-1);
        // int d=solve(startRow-1,startColumn,maxMove-1);

        // return t[startRow][startColumn][maxMove]= (a+b+c+d)%MOD;

        int result=0;

        for(vector<int>&dir:directions)
        {
            int new_row=startRow+dir[0];
            int new_col=startColumn+dir[1];

            result=(result+solve(new_row,new_col,maxMove-1))%MOD;
        }

        return t[startRow][startColumn][maxMove]=result;

    }
public:
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {

        M=m;
        N=n;
        memset(t,-1,sizeof(t));
        return solve(startRow,startColumn,maxMove);
        
    }
};