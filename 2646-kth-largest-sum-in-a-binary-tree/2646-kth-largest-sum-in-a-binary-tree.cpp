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
    int height = 0;
    queue<TreeNode*>q;
    vector<long long>sumarray;
    long long sum = 0;
    long long kthLargestLevelSum(TreeNode* root, int k) {
        q.push(root);
        q.push(nullptr);
        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();
            if(node){
                sum += node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }else{
                sumarray.push_back(sum);
                sum = 0;
                if(q.empty()) break;
                else q.push(nullptr);
            }
        }
        sort(sumarray.rbegin(), sumarray.rend());
        if(sumarray.size() < k) return -1;
        int i = 0;
        while(k){
            i++; k--;
        }
        return sumarray[i-1];
    }
};