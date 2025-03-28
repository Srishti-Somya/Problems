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
    // vector<int> temp;
    vector<int> preorderTraversal(TreeNode* root) {
        // if(root!=nullptr)
        // {
        //     temp.push_back(root->val);
        //     preorderTraversal(root->left);
        //     preorderTraversal(root->right);
        //     return temp;
        // }
        // return {};

        //iterative traversal
        if( root == nullptr)
        {
            return {};
        }
        stack<TreeNode*>st;
        
        vector<int> ans;
        st.push(root);
        while(!st.empty())
        {
            TreeNode *node = st.top();
            st.pop();
            if(node->right != nullptr)
            {
                st.push(node->right);
            }
            if(node->left != nullptr)
            {
                st.push(node->left);
            }
            ans.push_back(node->val);
        }
        return ans;
    }
};