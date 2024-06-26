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
    vector<int> inordered;
    vector<int> inorderT(TreeNode* root)
    {
        if( root != nullptr )
        {
            inorderT(root->left);
            inordered.push_back( root->val);
            inorderT(root->right);
        }
        return inordered;
    }
    TreeNode* balancing(vector<int>& inordered , int left, int right )
    {
        if(left > right)
        {
            return nullptr;
        }
        int mid = left + (right - left) / 2;
        TreeNode *root = new TreeNode(inordered[mid]);
        root->val = inordered[mid];
        root->left = balancing(inordered, left, mid - 1);
        root->right = balancing(inordered, mid + 1, right);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> temp = inorderT(root);
        return balancing(temp, 0, temp.size() - 1);
    }
};