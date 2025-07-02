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
    vector<int> inorder(TreeNode* root, vector<int>& temp){
        if(root == nullptr) return {};
        inorder(root->left, temp);
        temp.push_back(root->val);
        inorder(root->right, temp);
        return temp;
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>temp;
        temp = inorder(root, temp);
        int i = 0;
        while(i < k-1){i++;}
        return temp[i];
    }
};