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
        if(head == nullptr || head->next == nullptr) return nullptr;
        ListNode* slow = head, *fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                break;
            }
        }
        fast = head;
        while(fast && slow){
            if(slow == fast) break;
            slow = slow->next;
            fast = fast->next;
        }
        // if(!slow) return nullptr;
        // slow->next = nullptr;
        // return head;
        return slow;
    }
};