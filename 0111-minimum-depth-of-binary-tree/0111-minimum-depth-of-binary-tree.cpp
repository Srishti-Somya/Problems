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
    int ans;
    int minDepth(TreeNode* root) {
        if(root == nullptr) return 0;
        // if(root->left == nullptr && root->right)
        int left = minDepth(root->left);
        int right = minDepth(root->right);
        if(left == 0) ans = right; 
        else if(right == 0) ans = left;
        else ans = min(left, right);
        return ans+1;
    }
};