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
void inorder(TreeNode *root , vector<int> &inorderVal){
        if(root == NULL)
            return ;
        
        inorder(root->left , inorderVal);
        inorderVal.push_back(root->val);
        inorder(root->right , inorderVal);
        
    }
    
    vector<int> mergeArrays(vector<int> &a , vector<int> &b){
        vector<int> ans(a.size() + b.size());
        
        int i = 0 , j = 0 , k = 0;
        
        while(i < a.size() && j < b.size()){
            if(a[i] < b[j]){
                ans[k++] = a[i];
                i++;
            }
            else{
                ans[k++] = b[j];
                j++;
            }
        }
        
        while(i < a.size()){
            ans[k++] = a[i];
            i++;
        }
        
        while(j < b.size()){
            ans[k++] = b[j];
            j++;
        }
        return ans;
    }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> in1 , in2;
        inorder(root1 , in1);
        inorder(root2 , in2);
        
        //merge 2 sorted arrays
        vector<int> ans = mergeArrays(in1 , in2);
        return ans;
    // vector<int> inorder(TreeNode* root, vector<int> &temp)
    // {
    //     if(root != nullptr)
    //     {
    //         inorder(root->left, temp);
    //         temp.push_back(root->val);
    //         inorder(root->right, temp);
    //     }
    //     return temp;
    // }
    // vector<int> mergeArrays(vector<int> &a , vector<int> &b){
    //     vector<int> ans(a.size() + b.size());
    //     int i = 0 , j = 0 , k = 0;
    //     while(i < a.size() && j < b.size()){
    //         if(a[i] < b[j]){
    //             ans[k++] = a[i];
    //             i++;
    //         }
    //         else{
    //             ans[k++] = b[j];
    //             j++;
    //         }
    //     }
    //     while(i < a.size()){
    //         ans[k++] = a[i];
    //         i++;
    //     }
    //     while(j < b.size()){
    //         ans[k++] = b[j];
    //         j++;
    //     }
    //     return ans;
    // }
    // vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
    //     vector<int> temp1, temp2;
    //     temp1 = inorder(root1, temp1);
    //     temp2 = inorder(root2, temp2);
    //     // sort(temp.begin() , temp.end());
    //     return mergeArrays(temp1, temp2);
    }
};