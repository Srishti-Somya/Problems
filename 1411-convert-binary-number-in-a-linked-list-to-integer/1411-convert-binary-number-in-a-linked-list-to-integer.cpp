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
    int getDecimalValue(ListNode* head) {
        vector<int> arr;
        while(head != nullptr)
        {
            arr.push_back(head->val);
            head = head -> next;
        }
        int n = arr.size() - 1;
        int num = 0;
        int mul = 1;
        for( int i = n ; i >= 0 ; i-- )
        {
            num += arr[i]*mul;
            mul *= 2;
        }
        return num;
    }
};