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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* temp = head;
        while( temp != nullptr)
        {
            temp = temp -> next;
            count++;
        }
        count = count - n;
        temp = head;
        if(count == 0)
        {
            return head->next;
        }
        ListNode* prev = head;
        while( count > 0 && temp != nullptr)
        {
            prev = temp;
            temp = temp -> next;
            count--;
        }
        if(temp != nullptr){
            prev -> next = temp-> next;
        }
        return head;
    }
};