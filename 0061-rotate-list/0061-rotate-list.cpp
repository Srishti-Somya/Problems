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
        if(k == 0||head == nullptr||head->next == nullptr) return head;
        ListNode* temp = head;
        int n = 0;
        while(temp){
            temp = temp->next;
            n++;
        }
        if(k == n) return head;
        if(n == 0) return nullptr;
        k = k%n;
        if(k == 0) return head;
        int diff = n - k;
        ListNode *returnhead = head, *prev = head;

        while(diff && returnhead != nullptr){
            prev = returnhead;
            returnhead = returnhead->next;
            diff--;
        }
        prev->next = nullptr;
        ListNode* temp2 = returnhead;
        while(temp2 && temp2->next != nullptr){
            temp2 = temp2->next;
        }
        if(temp2)temp2->next = head;
        return returnhead;
    }
};