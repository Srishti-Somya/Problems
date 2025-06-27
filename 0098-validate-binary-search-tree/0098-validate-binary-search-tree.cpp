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
    // bool ValidBST(TreeNode* root, int valu ) {
    //     if(root == nullptr){
    //         return true;
    //     }
    //     if(root->left && ((root->left->val >= root->val) || (root->left->val >= valu))){
    //         return false;
    //     }
    //     if(root->right && (root->right->val <= root->val|| root->right->val <= valu)){
    //         return false;
    //     }
    //     // ;
    //     // ValidBST(root->right, valu);
    //     return ValidBST(root->left, max(valu, root->val)) && ValidBST(root->right, min(valu, root->val)) ;
    // }
    void inorder(TreeNode* root, vector<int>& temp){
        if(root == nullptr){
            return;
        }
        inorder(root->left,temp);
        temp.push_back(root->val);
        inorder(root->right, temp);
        return;
    }
    bool isValidBST(TreeNode* root) {
        if(root == nullptr){
            return true;
        }
        vector<int>temp;
        inorder(root, temp);
        for(int i = 1 ; i < temp.size() ; i++ ){
            if(temp[i] <= temp[i-1]) return false;
        }
        // if(root->left && root->left->val >= root->val){
        //     return false;
        // }
        // if(root->right && root->right->val <= root->val){
        //     return false;
        // }
        // isValidBST(root->left);
        // return ValidBST(root, root->val);
        return true;
    }
};