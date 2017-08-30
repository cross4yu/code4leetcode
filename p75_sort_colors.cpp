class Solution {
    public:
        void sortColors(vector<int>& nums)
        {
            int n = nums.size();
            int end = n - 1, start = 0;
            for (int i = 0; i < n; ++i)
            {
                while (nums[i] == 2 && i < end) swap(nums[i], nums[end--]);
                while (nums[i] == 0 && i > start) swap(nums[i], nums[start++]);
            }
        }
};
