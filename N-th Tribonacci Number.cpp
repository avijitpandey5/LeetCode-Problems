class Solution {
public:
    int a[40];
    int solve(int n)
    {
        if(n==0)
        return 0;

        if(a[n]!=-1)
        return a[n];

        if(n==1 || n==2)
        return 1;

        return a[n]=solve(n-1)+solve(n-2)+solve(n-3);

        
    }
    int tribonacci(int n) {

        memset(a,-1,sizeof(a));

        return solve(n);
        
    }
};
