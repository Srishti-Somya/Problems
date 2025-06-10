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
    vector<vector<int>> ans;
    queue<TreeNode*>q;
    vector<int>temp;
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == nullptr) return ans;
        q.push(root);
        q.push(nullptr);
        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();
            if(node){
                temp.push_back(node->val);
                if(node->left != nullptr) q.push(node->left);
                if(node->right != nullptr) q.push(node->right);
            }
            else{
                ans.push_back(temp);
                if(q.empty()) return ans;
                else{
                    while(temp.size()) temp.pop_back();
                    q.push(nullptr);
                }
            }
            
        }
        return ans;
    }
};