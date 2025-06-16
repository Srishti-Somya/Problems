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
    int ansSum = INT_MIN;
    int pathSum(TreeNode* root){
        if(root == nullptr){
            return 0;
        }
        int leftSum = 0, rightSum = 0;
        if(root->left)leftSum =max (0,pathSum(root->left) ); // if negative sum, dont consider - not my logic but strivers logic
        if(root->right)rightSum = max(0, pathSum(root->right));
        ansSum = max(ansSum, leftSum + rightSum + root->val);
        return max(leftSum , rightSum) + (root->val);
    }
    int maxPathSum(TreeNode* root) {
        pathSum(root);
        return ansSum;
    }
};