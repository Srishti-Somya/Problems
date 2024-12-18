/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        if(head == nullptr)
        {
            return nullptr;
        }
        while(fast != nullptr || fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next;
            if(fast != nullptr && fast->next != nullptr)
            {
                fast = fast->next;
            }
            else
            {
                return nullptr;
            }
            if(slow == fast)
            {
                break;
            }
        }
        if(slow != fast)
        {
            return nullptr;
        }
        slow = head;
        while(slow != fast)
        {
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};