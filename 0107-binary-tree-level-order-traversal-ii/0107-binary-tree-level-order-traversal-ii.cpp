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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root == nullptr) return {};
        vector<vector<int>>ans;
        vector<int>temp;
        queue<TreeNode*>q;
        q.push(root);
        q.push(nullptr);
        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();
            if(node){
                temp.push_back(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }else{
                ans.push_back(temp);
                if(q.empty()) break;
                else {
                    while(temp.size()>0) temp.pop_back();
                    q.push(nullptr);
                }
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};