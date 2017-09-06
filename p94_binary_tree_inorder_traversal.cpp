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
        vector<int> inorderTraversal(TreeNode* root)
        {
            vector<int> res;
            stack<TreeNode*> tovisit;
            TreeNode* cur = root;
            while(cur || !tovisit.empty())
            {
                if (cur)
                {
                    tovisit.push(cur);
                    cur = cur->left;
                }
                else
                {
                    cur = tovisit.top();
                    tovisit.pop();
                    res.push_back(cur->val);
                    cur = cur->right;
                }
            }
            return res;
        }
};
