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
    ListNode* reverse(ListNode* head)
    {
        ListNode* cnode = head, *pnode = nullptr, *nnode = nullptr;
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
        if( head == nullptr || head->next == nullptr)
        {
            return true;
        }
        if( head->next->next == nullptr)
        {
            if(head->val == head->next->val)
            {
                return true;
            }
            return false;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != nullptr && fast->next->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next;
            if( fast->next != nullptr )
            {
                fast = fast->next;
            }
        }
        ListNode* temp = reverse(slow->next);
        fast = head;
        while(temp != nullptr)
        {
            if(temp->val != fast->val)
            {
                return false;
            }
            temp = temp->next;
            fast = fast->next;
        }
        return true;
    }
};