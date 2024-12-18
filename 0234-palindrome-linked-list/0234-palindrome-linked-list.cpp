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
    ListNode* reverseList(ListNode* head)
    {
        ListNode *cnode, *pnode, *nnode;
        cnode = head;
        pnode = nullptr;
        while(cnode != nullptr)
        {
            nnode = cnode->next;
            cnode->next = pnode;
            pnode = cnode;
            cnode = nnode;
        }
        return pnode;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        if(head == nullptr)
        {
            return false;
        }
        else if(head->next == nullptr)
        {
            return true;
        }
        else if(head->next->next == nullptr)
        {
            if(head->val == head->next->val)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        while(fast->next != nullptr && fast->next->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next;
            if(fast->next != nullptr)
            {
                fast = fast->next;
            }
        }
        // slow = slow->next;
        ListNode* temp2 = reverseList(slow->next);
        ListNode* temp = head;
        while(temp2 != nullptr)
        {
            if(temp->val != temp2->val)
            {
                return false;
            }
            temp = temp->next;
            temp2 = temp2->next;
        }
        return true;
    }
};