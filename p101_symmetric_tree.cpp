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
        bool isSymmetric(TreeNode* root)
        {
            TreeNode *left, *right;
            if(!root) return true;

            queue<TreeNode*> p, q;
            p.push(root->left);
            q.push(root->right);
            while(!p.empty() && !q.empty())
            {
                left = p.front();
                p.pop();
                right = q.front();
                q.pop();
                if (left == NULL && right == NULL)
                    continue;
                if (left == NULL || right == NULL)
                    return false;
                if (left->val != right->val)
                    return false;
                p.push(left->left);
                p.push(left->right);
                q.push(right->right);
                q.push(right->left);
            }
            return true;
        }
};
