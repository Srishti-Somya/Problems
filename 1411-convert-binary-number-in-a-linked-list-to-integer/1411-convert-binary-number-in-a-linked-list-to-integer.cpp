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
    ListNode* reverseList(ListNode* head){
        ListNode *cnode = head, *pnode = nullptr, *nnode = nullptr;
        while(cnode != nullptr){
            nnode = cnode->next;
            cnode->next = pnode;
            pnode = cnode;
            cnode = nnode;
        }
        return pnode;
    }
    int getDecimalValue(ListNode* head) {
        ListNode* temp = reverseList(head);
        int ans = 0, multiplier = 1;
        while(temp){
            ans += temp->val*multiplier;
            temp = temp->next;
            multiplier *= 2;
        }
        return ans;
    }
};