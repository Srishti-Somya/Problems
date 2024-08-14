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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || k == 0 || head->next == nullptr)
        {
            return head;
        }
        int n = 0;
        ListNode* temp = head;
        while(temp != nullptr)
        {
            temp = temp->next;
            n++;
        }
        
        k = k % n;
        if(head == nullptr || k == 0 || head->next == nullptr)
        {
            return head;
        }
        ListNode *slow = head;
        ListNode *fast = head;
        while( k-- && fast != nullptr)
        {
            fast = fast->next;
        }
        if(fast == nullptr)
        {
            return slow;
        }
        while(fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast -> next;
        }
        ListNode* newHead = slow->next;
        slow -> next = nullptr;
        ListNode* temp2 = newHead; 
        while(temp2 != nullptr && temp2->next != nullptr )
        {
            temp2 = temp2 -> next;
        }
        if(temp2 != nullptr)
        temp2->next = head;
        return newHead;
    }
};