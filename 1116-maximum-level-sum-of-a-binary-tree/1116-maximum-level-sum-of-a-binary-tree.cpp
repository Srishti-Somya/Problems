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
    int level = 0;
    int sum = INT_MIN, ans = 0, currSum = 0;
    int maxLevelSum(TreeNode* root) {
        q.push(root);
        q.push(nullptr);
        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();
            if(node){
                currSum += node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }else{
                level++;
                if(currSum > sum){
                    ans = level;
                    sum = currSum;
                }
                currSum = 0;
                if(q.empty()) break;
                else q.push(nullptr);
            }
        } 
        return ans;
    }
};