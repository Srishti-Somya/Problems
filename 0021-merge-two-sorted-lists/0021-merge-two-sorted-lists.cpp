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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* newlist = new ListNode(INT_MIN);
        ListNode* curr = newlist;
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        while(temp1  || temp2)
        {
            int val1 = INT_MAX,val2 = INT_MAX;
            if( temp1 != nullptr)
            {
                val1 = temp1->val;
            }
            if( temp2 != nullptr)
            {
                val2 = temp2->val;
            }
            if(val1 <= val2)
            {
                curr->next= temp1;
                if( temp1 != nullptr)
                {
                    temp1 = temp1->next;
                }
            }else
            {
                curr->next = temp2;
                if( temp2 != nullptr)
                {
                    temp2 = temp2->next;
                }
            }
            curr = curr->next;
        }
        return newlist->next;
    }
};