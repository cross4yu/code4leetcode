class Solution {
    public:
        vector<vector<int> > generateMatrix(int n)
        {
            vector<vector<int> >res;
            if (n <= 0) return res;
            for (int i = 0; i < n;i++)
                res.push_back(vector<int>(n, 0));
            int rowstart = 0;
            int rowend = n - 1;
            int lineend = n - 1;
            int linestart = 0;
            int num = 1;
            
            while (rowstart <= rowend && linestart <= lineend )
            {
                for ( int i = linestart; i <= lineend; ++i)
                    res[rowstart][i] = num++;
                rowstart++;
                for ( int i = rowstart; i <= rowend; ++i)
                    res[i][lineend] = num++;
                lineend--;
                for ( int i = lineend; i >= linestart; --i)
                    if ( rowstart <= rowend)
                        res[rowend][i] = num++;
                rowend--;
                for (int i = rowend; i >= rowstart; --i)
                    if (linestart <= lineend)
                        res[i][linestart] = num++;
                linestart++;
            }
            return res;
        }
};
