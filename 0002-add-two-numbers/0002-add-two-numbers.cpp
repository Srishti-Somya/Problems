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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr && l2 == nullptr)
        {
            return NULL;
        }else if(l1 == NULL)
        {
            return l2;
        }else if(l2 == NULL)
        {
            return l1;
        }

        int value = l1->val + l2->val;
        int carry = value/10;

        ListNode* newlist = new ListNode(value%10);
        ListNode* temp = newlist;
        l1 = l1->next;
        l2 = l2 -> next;
        value = 0;
        while(l1 != NULL || l2 != NULL)
        {   
            if(l1!= nullptr)
            {
                value += l1->val;
                l1 = l1 -> next;
            }
            if(l2 != nullptr)
            {
                value += l2 -> val;
                l2 = l2 -> next;
            }
            value += carry;
            carry = value/10;
            ListNode* newnode = new ListNode(value%10);
            temp->next = newnode;
            temp = temp -> next;
            value = 0;
        }
        if(carry != 0)
        {
            ListNode* newnode = new ListNode(carry);
            temp->next = newnode;
            temp = temp -> next;
        }
        return newlist;
    }
};