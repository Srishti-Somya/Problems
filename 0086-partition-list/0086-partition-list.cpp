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
    ListNode* partition(ListNode* head, int x) {
        // ListNode *new_list = new ListNode(-101);
        // ListNode *curr = new_list;
        // ListNode *temp = head;
        // while(temp != nullptr)
        // {
        //     if(temp->val < x)
        //     {
        //         int val = temp->val;
        //         ListNode* new_node = new ListNode(val);
        //         curr->next = new_node;
        //         curr = curr->next;
        //         temp->val = -101;
        //     }
        //     temp = temp->next;
        // }
        // ListNode *temp2 = head;
        // while(temp2 != nullptr)
        // {
        //     if(temp2->val != -101)
        //     {
        //         int val = temp2->val;
        //         ListNode* new_node = new ListNode(val);
        //         curr->next = temp2;
        //         curr = curr->next;
        //     }
        //     temp2 = temp2->next;
        // }
        // return curr->next;
        ListNode* dummy1 = new ListNode();
        ListNode* temp1 = dummy1;
        ListNode* dummy2 = new ListNode();
        ListNode* temp2 = dummy2;
        while (head != NULL) {
            if (head->val < x) {
                temp1->next = head;
                temp1 = temp1->next;
            } else {
                temp2->next = head;
                temp2 = temp2->next;
            }
            head = head->next;
        }
        if (dummy1->next == NULL)
            return dummy2->next;
        temp1->next = dummy2->next;
        temp2->next = NULL;
        return dummy1->next;  
    }
};