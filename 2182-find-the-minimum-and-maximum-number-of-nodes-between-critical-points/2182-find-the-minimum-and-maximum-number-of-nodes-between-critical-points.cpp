/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans(2,-1);
        vector<int>indices;
        ListNode *temp = head;
        ListNode *prev = head;
        int count = 1;
        while(temp != nullptr)
        {
            if(temp != head && temp->next != nullptr)
            {
                if((prev->val > temp->val && (temp->next)->val > temp->val) || (prev->val < temp->val && (temp->next)->val < temp->val))
                {
                    indices.push_back(count);
                }
            }
            count++;
            prev = temp;
            temp = temp->next;
        }
        if(indices.size() < 2)
        {
            return ans;
        }
        sort(indices.begin(), indices.end());
        int n = indices.size() - 1;
        // ans[0] = indices[n] - indices[n-1];
        ans[1] = indices[n] - indices[0];
        int mini = INT_MAX;
        // int maxi = INT_MIN;
        for( int i = 0; i < indices.size() - 1; i++ )
        {
            mini = min(mini, abs(indices[i] - indices[i+1]));
        }
        ans[0] = mini;
        return ans;
    }
};