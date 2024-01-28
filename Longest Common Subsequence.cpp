class Solution {
public:
    int t[1001][1001];
    int solve(string&s1, string&s2,int m,int n,int i,int j)
    {
        if(i>=m || j>=n)
        {
            return 0;
        }

        if(t[i][j]!=-1)
        return t[i][j];

        if(s1[i]==s2[j])
        {
            return t[i][j]=1+solve(s1,s2,m,n,i+1,j+1);
        }

        return t[i][j]=max(solve(s1,s2,m,n,i+1,j),solve(s1,s2,m,n,i,j+1));
    }
    int longestCommonSubsequence(string s1, string s2) {

       int m=s1.length();
       int n=s2.length();
       
       memset(t,-1,sizeof(t));

       return  solve(s1,s2,m,n,0,0);
        
    }
};