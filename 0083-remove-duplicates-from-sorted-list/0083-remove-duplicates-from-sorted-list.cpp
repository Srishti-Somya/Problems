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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = head;
        if(head == nullptr || head -> next == nullptr)
        {
            return head;
        }
        temp = prev->next;
        while( temp != nullptr )
        {
            // prev = temp;
            // temp = temp->next;
            if(prev != nullptr && temp != nullptr && prev->val == temp->val)
            {
                prev->next = temp->next;
                temp = temp->next;
            }
            else
            {
                prev = temp;
                temp = temp -> next;
            }
        }
        return head;
    }
};