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
    bool check(TreeNode* root, TreeNode* subRoot){
        if(root == nullptr || subRoot == nullptr){
            return root==subRoot;
        }
        return check(root->left, subRoot->left) && check(root->right, subRoot->right) && root->val == subRoot->val;
    }
    bool ans = false;
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == nullptr || subRoot == nullptr){
            return root==subRoot;
        }
        if(root->val == subRoot->val && check(root, subRoot)){
            return true;
        }
        bool left = isSubtree(root->left, subRoot);
        bool right = isSubtree(root->right, subRoot);
        return left||right;
    }
};