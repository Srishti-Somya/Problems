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
    TreeNode* ans_node;
    TreeNode* inorder(TreeNode* root, int val)
    {
    if (root == nullptr) return nullptr;

    TreeNode* leftResult = inorder(root->left, val);
    if (leftResult != nullptr) return leftResult;

    if (root->val == val) return root;

    return inorder(root->right, val);
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* node = inorder(root, val);
        return node;
    }
};