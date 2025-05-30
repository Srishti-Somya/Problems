/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        int lenA = 0, lenB = 0;
        while(temp1){
            lenA++;
            temp1 = temp1->next;
        }
        while(temp2){
            lenB++;
            temp2 = temp2->next;
        }
        int diff = abs(lenA-lenB);
        if(lenA > lenB) {
            while(diff){
                headA = headA->next;
                diff--;
            }
        }else{
            while(diff){
                headB = headB->next;
                diff--;
            }
        }
        while(headA != headB){
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
    }
};