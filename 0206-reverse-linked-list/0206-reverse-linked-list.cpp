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
    ListNode* reverseList(ListNode* head) {
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
        // return pnode;

        // ListNode *cnode, *pnode, *nnode;
        // pnode = nullptr;
        // cnode = head;

        // while(cnode != nullptr)
        // {
        //     nnode = cnode->next;
        //     cnode->next = pnode;

        //     pnode = cnode;
        //     cnode = nnode;
        // }
        // return pnode;
        if (head == NULL ||  head->next == NULL ) {
            return head;
        }
        ListNode* newHead = reverseList(head->next);
        ListNode* front = head->next;
        front->next = head;
        head->next = NULL;
        return newHead;
        
    }
};