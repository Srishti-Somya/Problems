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
    int count = 0;
    queue<TreeNode*>q;
    int maxDepth(TreeNode* root) {
        if(root == nullptr){
            return 0;
        }
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        int height = max(left, right);
        return height+1;
        // if(root == nullptr) return 0;
        // q.push(root);
        // q.push(nullptr);
        // while(!q.empty()){
        //     TreeNode* node = q.front();
        //     q.pop();
        //     if(node){
        //         if(node->left) q.push(node->left);
        //         if(node->right) q.push(node->right);
        //     }else{
        //         count++;
        //         if(q.empty()) break;
        //         else q.push(nullptr);
        //     }
        // }
        // return count;
    }
};