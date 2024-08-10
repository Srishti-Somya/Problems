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
    int maxi;
    int maxipath(TreeNode* root)
    {
        if(root == nullptr)
        {
            return 0;
        }
        int lh = maxipath(root->left);
        int rh = maxipath(root->right);
        maxi = max(maxi, lh+rh);
        return 1 + max(lh,rh);
    }
    void diameterOfNode(TreeNode* root,vector<int>& dias )
    {
        if(root == nullptr)
        {
            return; 
        }
        int lh = maxipath(root->left);
        int rh = maxipath(root->right);
        dias.push_back(lh+rh);
        diameterOfNode(root->left,dias);
        diameterOfNode(root->right, dias);
        return;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        // vector<int>dias;
        // diameterOfNode(root, dias);
        // int maxdiameter = 0;
        // for( int i = 0 ; i < dias.size() ; i++ )
        // {
        //     maxdiameter = max(maxdiameter, dias[i]);
        // }
        int height = maxipath(root);
        return maxi;
    }
};