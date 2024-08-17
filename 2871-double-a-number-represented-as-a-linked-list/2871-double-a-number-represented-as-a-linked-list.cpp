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
    ListNode* reverselist(ListNode* head)
    {
        ListNode *pnode = nullptr, *cnode = head, *nnode = nullptr;
        while(cnode != nullptr)
        {
            nnode = cnode->next;
            cnode->next = pnode;

            pnode = cnode;
            cnode = nnode;
        }
        return pnode;
    }
    ListNode* doubleIt(ListNode* head) {
        ListNode* temp = reverselist(head);
        int value = 0;
        int carry = 0;
        if( temp != nullptr )
        {
            value = 2 * temp->val + carry;
            carry = value / 10;
            value = value % 10;
            temp = temp->next;
        }
        ListNode* newlist = new ListNode(value);
        ListNode* curr = newlist;
        while(temp != nullptr)
        {
            value = 2 * temp->val + carry;
            carry = value / 10;
            value = value % 10;
            temp = temp->next;
            ListNode* newnode = new ListNode(value);
            curr->next = newnode;
            curr = curr->next;
        }
        if(carry != 0)
        {
            ListNode* newnode = new ListNode(carry);
            curr->next = newnode;
            curr = curr->next;
        }
        return reverselist(newlist);
    }
};