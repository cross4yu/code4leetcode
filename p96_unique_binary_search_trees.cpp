class Solution {
    public:
        int numTrees(int n)
        {
            vector<int>F(n+1,0);
            F[0]=F[1] = 1;
            for (int i = 2; i <= n; ++i)
                for (int j = 1; j <= i; ++j)
                    F[i] += F[j-1]*F[i-j];
            return F[n];
        }
};
