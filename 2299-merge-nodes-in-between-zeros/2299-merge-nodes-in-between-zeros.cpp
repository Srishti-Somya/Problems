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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* newlist = new ListNode(-1);
        ListNode* curr = newlist;
        ListNode* temp = head->next;
        int sum = 0;
        while(temp != nullptr)
        {
            if(temp->val == 0)
            {
                ListNode* newnode = new ListNode(sum);
                curr->next = newnode;
                curr = curr->next;
                sum = 0;
                temp = temp->next;
            }
            else
            {
                sum += temp->val;
                temp = temp -> next;
            }
        }
        return newlist->next;
    }
};