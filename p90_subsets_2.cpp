class Solution {
    public:
        vector<vector<int> >subsetsWithDup(vector<int>&nums)
        {
            vector<vector<int> > res = {{}};
            sort(nums.begin(), nums.end());
            for (int i = 0; i < nums.size(); )
            {
                int count = 0;
                while (count + i < nums.size() && nums[count+i]==nums[i])
                    count++;
                int presize = res.size();
                for ( int j = 0; j < presize; ++j)
                {
                    vector<int> inst = res[j];
                    for ( int k = 0 ;k <count; ++k)
                    {
                        inst.push_back(nums[i]);
                        res.push_back(inst);
                    }
                }
                i += count;
            }
            return res;
        }
};
