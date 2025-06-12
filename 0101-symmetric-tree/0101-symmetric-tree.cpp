/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSame(TreeNode* rootleft, TreeNode* rootright){
        if(!rootleft && !rootright) return true;
        if(!rootleft || !rootright){ return false;}
        return (rootleft->val == rootright->val) && isSame(rootleft->left, rootright->right)&& isSame(rootleft->right, rootright->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return isSame(root->left, root->right);
    }
};