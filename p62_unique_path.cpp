class Solution {
    public:
        int uniquePaths(int m, int n)
        {
            vector<vector<int> >path(m, vector<int>(n,1));
            for (auto i = 1; i < m; ++i)
                for( auto j = 1; j < n; ++j)
                    path[i][j] = path[i-1][j] + path[i][j-1];
                return path[m-1][n-1];
        }
};
