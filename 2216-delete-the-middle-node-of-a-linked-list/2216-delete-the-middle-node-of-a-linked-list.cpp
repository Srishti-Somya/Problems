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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == nullptr || head->next == nullptr)
        {
            return nullptr;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* temp = slow;
        while( fast->next != nullptr )
        {
            temp = slow;
            slow = slow->next;
            fast = fast->next;
            if(fast->next != nullptr)
            {
                fast = fast->next;
            }
        }
        temp->next = slow->next;
        delete(slow);
        return head;
    }
};