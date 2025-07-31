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
    ListNode* reverse(ListNode* head){
        ListNode *cnode = head, *pnode = nullptr, *nnode = nullptr;
        while(cnode != nullptr){
            nnode = cnode->next;
            cnode->next = pnode;
            pnode = cnode;
            cnode = nnode;
        }
        return pnode;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head, *fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* reversed = reverse(slow);
        ListNode* curr1 = head, *curr2 = reversed;
        
        while(curr2){
            if(curr1->val != curr2->val){
                return false;
            }
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        return true;
    }
};