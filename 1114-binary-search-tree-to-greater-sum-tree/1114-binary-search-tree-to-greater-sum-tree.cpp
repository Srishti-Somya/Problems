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
    vector<int> traversed;
    vector<int> bstTraversal(TreeNode* root)
    {
        if(root != nullptr)
        {
            bstTraversal(root->left);
            traversed.push_back(root->val);
            bstTraversal(root->right);
        }
        return traversed;
    }
    void converting(TreeNode* root, vector<int>& stored)
    {
        if(root != nullptr)
        {
            converting(root->left, stored);
            int sum = 0;
            for(int i = 0; i < stored.size() ; i++ )
            {
                if(stored[i] > root->val)
                {
                    sum += stored[i];
                }
            }
            root->val += sum;
            converting(root->right, stored);
        }
    }

    TreeNode* bstToGst(TreeNode* root) {
        // if(root != nullptr)
        // {
        //     bstToGst(root->right);
        //     root->val += sum;
        //     sum += root->val;
        //     bstToGst(root->left);
        // }
        // return root;
        vector<int> stored = bstTraversal(root);
        converting(root, stored);
        return root;
    }
};