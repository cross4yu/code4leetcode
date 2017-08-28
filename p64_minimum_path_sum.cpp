class Solution {
    public:
        int minPahtSum(vector<vector<int> >& grid)
        {
            int m = grid.size();
            if (m == 0) return 0;
            int n = grid[0].size();
            vector<vector<int> > sum(m, vector<int>(n, grid[0][0]));
            for (auto i = 1; i < m; ++i)
                sum[i][0] = sum[i-1][0] + grid[i][0];
            for (auto j = 1; j < n; ++j)
                sum[0][j] = sum[0][j-1] + grid[0][j];
            for (auto i = 1; i < m; ++i)
                for (auto j = 1; j < n;++j)
                    sum[i][j] = min(sum[i-1][j], sum[i][j-1]) + grid[i][j];
            return sum[m-1][n-1];
        }
};
