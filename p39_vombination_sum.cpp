class Solution {
    public:
        vector<vector<int> > combinationSum(vector<int>& candidates, int target)
        {
            sort(candidates.begin(), candidates.end());
            vector<vector<int> > result;
            vector<int> combination;
            combinationSum(candidates, target, result, combination, 0);
            return result;
        }
    private:
        void combinationSum(vector<int>& candidates, int target, vector<vector<int> > &result, vector<int>& combination, int begin)
        {
            if (!target) 
            {
                result.push_back(combination);
                return;
            }
            for (auto i = begin; i < candidates.size() && target >= candidates[i]; ++i)
            {
                combination.push_back(candidates[i]);
                combinationSum(candidates, target - candidates[i], result, combination, i);
                combination.pop_back();
            }
        }
};
