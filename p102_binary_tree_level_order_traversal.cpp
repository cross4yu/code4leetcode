/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 *
 */
 class Solution {       
    public:    
        void tran(TreeNode* root, vector<vector<int> >&res, int depth)
        {              
            if (root == NULL) return;
            if (res.size() == depth)
                res.push_back(vector<int>());
            res[depth].push_back(root->val);                                                            
            tran(root->left, res, depth+1);
            tran(root->right, res, depth+1);
        } 
        vector<vector<int> > levelOrder(TreeNode* root)
        {              
            vector<vector<int> >res;
            tran(root, res, 0); 
            return res;
        }              
             
};
