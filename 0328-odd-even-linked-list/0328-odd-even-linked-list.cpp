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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next || !head->next->next) return head;
        ListNode* oddlist = head;
        ListNode* temp = oddlist;
        ListNode* evenlist = head->next;
        ListNode* temp2 = evenlist;
        while(temp->next->next && temp2->next->next){
            temp->next = temp->next->next;
            temp = temp->next;
            temp2->next = temp2->next->next;
            temp2 = temp2->next;
        }
        if(temp->next->next) {
            temp->next = temp->next->next;
            temp = temp->next;
            temp2->next = nullptr;
        }
        temp->next = evenlist;
        return oddlist;
    }
};