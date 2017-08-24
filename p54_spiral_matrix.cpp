class Solution {
    public:
    vector<int> spiralOrder(vector<vector<int>>& g) {
    int m = g.size(), n = m ? g[0].size() : 0, d = 0, i = 0, j = -1;
    vector<int> res, dir = {0,1,0,-1,0}, step = {n+1, m};
    while(--step[d%2]){
        for(int k=0; k<step[d%2]; ++k) res.push_back(g[i+=dir[d]][j+=dir[d+1]]);
        d = ++d%4;
    }
    return res;
}
};


/*class Solution {
    public:
        vector<int> spiralOrder(vector<vector<int> >&matrix)
        {
            if (matrix.empty()) return {};
            int row = matrix[0].size();
            int line = matrix.size();
            int sr = 0;
            int sl = 0;
            vector<int> res;
            while (row>2*sr&&line>2*sl)
            {
                //int i = 0, j = 0;
                for (auto i = sr ;i < row-1 ; ++i)
                    res.push_back(matrix[sl][i]);
                for (auto j = sl ;j < line-1; ++j)
                    res.push_back(matrix[j][row-1]);
                for (auto i = row-1; i > sr; --i)
                    res.push_back(matrix[line-1][i]);
                for (auto j = line-1; j> sl;--j)
                    res.push_back(matrix[j][sr]);
                sr++;
                sl++;
                row--; line--;
            }
            return res;
        }
};*/
