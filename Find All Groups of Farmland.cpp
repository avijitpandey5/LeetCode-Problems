class Solution {
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {

        int m = land.size();
        int n = land[0].size();
        std::vector<std::vector<int>> res;
        
        auto exploreFarmland = [&](int r1, int c1) {
            int r2 = r1;
            int c2 = c1;
            
            while (r2 < m && land[r2][c1] == 1) {
                c2 = c1;
                while (c2 < n && land[r2][c2] == 1) {
                    land[r2][c2] = 0;
                    c2++;
                }
                r2++;
            }
            
            return std::vector<int>{r1, c1, r2 - 1, c2 - 1};
        };
        
        for (int r1 = 0; r1 < m; r1++) {
            for (int c1 = 0; c1 < n; c1++) {
                if (land[r1][c1] == 1) {
                    auto coordinates = exploreFarmland(r1, c1);
                    res.push_back(coordinates);
                }
            }
        }
        
        return res;
        
    }
};
