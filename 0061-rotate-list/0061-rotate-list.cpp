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
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* temp = head, *prev = head;
        int n = 0;
        while(temp){
            temp = temp->next;
            n++;
        }
        k = k % n;
        if(k == 0) return head;
        int rem = n - k;
        temp = head;
        while(rem > 0){
            prev = temp;
            temp = temp->next;
            rem--;
        }
        prev->next = nullptr;
        ListNode* newhead = temp;
        while(temp->next){temp = temp->next;}
        temp->next = head;
        return newhead;
    }
};