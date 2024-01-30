class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {

        int rows=matrix.size();
        int cols=matrix[0].size();

        int result=0;

        for(int row=0;row<rows;row++)
        {
            for(int col=1;col<cols;col++)
            {
                matrix[row][col]+=matrix[row][col-1];
            }
        }

        for(int startCol=0;startCol<cols;startCol++)
        {
            for(int j=startCol;j<cols;j++)
            {
                unordered_map<int,int>mp;
                int sum=0;
                // int result=0;
                mp.insert({0,1});
                for(int row=0;row<rows;row++)
                {
                    sum+=matrix[row][j]-(startCol>0?matrix[row][startCol-1]:0);
                    if(mp.find(sum-target)!=mp.end())
                    {
                        result+=mp[sum-target];
                    }
                    mp[sum]++;
                }
            }
        }

        return result;
        
    }
};