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
    vector<int> rightSideView(TreeNode* root) {
        if(root == nullptr) return {};
        vector<int>ans;
        queue< pair<TreeNode*, int>>q;
        q.push({root, 0});
        map<int, int>mp;

        while(!q.empty()){
            TreeNode* node = q.front().first;
            int curr_dist = q.front().second;
            q.pop();
            mp[curr_dist] = node->val;
            if(node->left) q.push({node->left, curr_dist+1});
            if(node->right) q.push({node->right, curr_dist+1});
        }
        for(auto it : mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};