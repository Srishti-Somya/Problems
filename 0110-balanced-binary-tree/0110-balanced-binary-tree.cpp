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
    // int height = 0;
    // queue<TreeNode*>q;
    // int dep = 0;
    int height(TreeNode* root){
        if(root == nullptr) return 0;
        int left = height(root->left);
        int right = height(root->right);
        return max(left,right)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root == nullptr) return true;
        int left = height(root->left);
        int right = height(root->right);
        return (abs(left-right) <= 1)&&isBalanced(root->left) && isBalanced(root->right);
        // if(root == nullptr) return true;
        // q.push(root);
        // q.push(nullptr);
        // while(!q.empty()){
        //     TreeNode* node = q.front();
        //     q.pop();
        //     if(node){
        //         if(!node->left && !node->right) {
        //             if(dep == 0) dep = height+1;
        //         }
        //         else if (node->left){ q.push(node->left);}
        //         else if (node->right){  q.push(node->right);}
        //     }else{
        //         height++;
        //         if(q.empty()) break;
        //         else q.push(nullptr);
        //     }
        // }
        // return ((height - dep) <= 1);
    }
};