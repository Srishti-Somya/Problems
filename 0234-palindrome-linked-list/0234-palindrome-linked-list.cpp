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
    ListNode* getMiddle(ListNode* head){
        ListNode* slow = head, *fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* reverseLL(ListNode* head){
        ListNode* pnode = nullptr, *cnode = head, *nnode;
        while(cnode != nullptr){
            nnode = cnode->next;
            cnode->next = pnode;
            pnode = cnode;
            cnode = nnode;
        }
        return pnode;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* middle_node = getMiddle(head);
        ListNode* reversed_node = reverseLL(middle_node);
        while(head && reversed_node && head != reversed_node){
            if(head->val != reversed_node->val) return false;
            head = head->next;
            reversed_node = reversed_node->next;
        }
        return true;
    }
};