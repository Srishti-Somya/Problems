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
    bool hasCycle(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head;
        if( head == nullptr)
        {
            return false;
        }
        while(fast->next != nullptr)
        {
            
            slow = slow -> next;
            fast = fast -> next ;
            if( fast -> next != nullptr)
            {
                fast = fast -> next;
            }
            else
            {
                return false;
            }
            if(slow == fast)
            {
                return true;
            }
        }
        return false;
    }
};