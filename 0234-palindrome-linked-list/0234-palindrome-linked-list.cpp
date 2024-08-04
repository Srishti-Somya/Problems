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
    bool isPalindrome(ListNode* head) {
        // if(head == NULL || head->next == NULL){
        //     return true;
        // }

        // ListNode *pnode, *cnode, *nnode;
        // cnode = head;
        // pnode = nullptr;
        // while(cnode!=nullptr)
        // {
        //     nnode = cnode->next;
        //     cnode->next = pnode;

        //     pnode = cnode;
        //     cnode = nnode;

        // }

        // while(head!=nullptr && pnode!=nullptr)
        // {
        //     if(head->val!=pnode->val){
        //         return false;
        //     }
        //     else
        //     {
        //         head = head->next;
        //         pnode = pnode->next;
        //     }
            
        // }
        // return true;
        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *prev = nullptr;
        while(fast != nullptr && fast->next != nullptr)
        {
            fast = (fast->next)->next;
            ListNode *nextNode = slow->next;
            slow->next = prev;
            prev = slow;
            slow = nextNode;
        }
        if(fast!= nullptr)
        {
            slow = slow->next;
        }
        while(slow != nullptr)
        {
            if(prev->val != slow->val)
            {
                return false;
            }
            prev = prev->next;
            slow = slow->next;
        }
        return true;

    }
};