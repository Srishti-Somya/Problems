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
    queue<TreeNode*>q;
    vector<vector<int>>ans;
    vector<int>temp;
    int flag = 0;
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == nullptr) return {};
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
                if(flag == 0) { flag = 1;}
                else{
                    reverse(temp.begin(), temp.end());
                    flag = 0;
                }
                ans.push_back(temp);
                while(!temp.size() == 0) temp.pop_back();
                if(q.empty()) break;
                else q.push(nullptr);
            }
        }
        return ans;
    }
};