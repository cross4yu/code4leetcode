/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
    public:
        TreeNode* sortedArrayToBST(vector<int>& nums,int start, int end)
        {
            if (end <= start) return NULL;
            int mid = (end - start)/2 +start;
            TreeNode* root = new TreeNode(nums[mid]);
            root->left = sortedArrayToBST(nums, start, mid);
            root->right = sortedArrayToBST(nums, mid+1, end);
            return root;
        }
        TreeNode* sortedArrayToBST(vector<int>& nums)
        {
            return sortedArrayToBST(vector<int>& nums, 0, nums.size());
        }
};
