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
    TreeNode* parent(TreeNode* root, int val){
        // if(root == nullptr) return root;
        // if(root->val > val) parent(root->left, val);
        while(root->left || root->right){
            if(root->val > val){
                if(root->left) root = root->left;
                else return root;
            }else{
                if(root->right) root = root->right;
                else return root;
            }
        }
        return root;
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* newNode = new TreeNode(val);
        if(root == nullptr){
            return newNode;
        }
        TreeNode* parent_node = parent(root, val);
        if(parent_node->val > val) {
            parent_node->left = newNode;
        }else{
            parent_node->right = newNode;
        }
        return root;
    }
};