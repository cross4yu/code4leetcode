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
        vector<vector<int> >pathSum(TreeNode* root, int sum)
        {
            vector<vector<int> > paths;
            vector<int> path;
            findPaths(root, sum, path, paths);
            return paths;
        }

        void findPaths(TreeNode* root, int sum, vector<int>& path, vector<vector<int> >& paths)
        {
            if (root == NULL) return ;
            path.push_back(root->val);
            if (!(root->left) && !(root->right) && sum == root->val)
                paths.push_back(path);
            findPaths(root->left, sum - root->val, path, paths);
            findPaths(root->right,sum - root->val, path, paths);
            path.pop_back();
            
        }
};

