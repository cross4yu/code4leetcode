class Solution {
    public:
        bool searchMatrix(vector<vector<int> >&matrix, int target)
        {
            if (matrix.empty() || matrix[0].empty()) return false;
            int m = matrix.size();
            int n = matrix[0].size();

            int start = 0;
            int end = m*n -1;
            while (start <= end)
            {
                int mid = start + (end - start)/2;
                int sec = matrix[mid / n][mid % n];
                if (target < sec)
                    end = mid - 1;
                else if (target > sec)
                    start = mid + 1;
                else
                    return true;
            }
            return false;
        }
};
