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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL)
        {
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        while( !q.empty())
        {
            int level_siz = q.size();
            vector<int> levels;
            for( int i = 0; i < level_siz ; i++ )
            {
                if(q.front()->left != nullptr){q.push(q.front()->left);}
                if(q.front()->right != nullptr){q.push(q.front()->right);}
                levels.push_back(q.front()->val);
                q.pop();
            }
            ans.push_back(levels);
        }
        return ans;
    }
};