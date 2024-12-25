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
    vector<int> largestValues(TreeNode* root) {
        
        queue< TreeNode* >Q;
        vector<int>ans;
        if(root == nullptr)
        {
            return ans;
        }
        int maxi;
        Q.push(root);
        
        while(!Q.empty())
        {
            maxi = INT_MIN;
            int n = Q.size();
            while(n--)
            {
                TreeNode* node = Q.front();
                Q.pop();
                maxi = max(maxi, node->val);
                if(node->left != nullptr)
                {
                    Q.push(node->left);
                }
                if(node->right != nullptr)
                {
                    Q.push(node->right);
                }
            }
            ans.push_back(maxi);
            
        }
        return ans;
    }
};