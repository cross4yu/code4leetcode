class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        vector<int> result;
        for (int i = 0; i < nums.size(); ++i)
        {
            int numtofind = target - nums[i];
            if (hash.find(numtofind) != hash.end())
            {
                result.push_back(hash[numtofind]);
                result.push_back(i);
                return result;
            }
            hash[nums[i]] = i;
        }
        return result;
    }
};
