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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp = list1;
        ListNode* tem2 = list1;
        int count = 1;
        while( temp != nullptr )
        {
            if(count == a)
            {
                tem2 = tem2->next;
                temp->next = list2;
                break;
            }
            else
            {
                tem2 = tem2 -> next;
                temp = temp->next;
                count++;
            }
        }
        while(temp->next != nullptr)
        {
            temp = temp->next;
        }
        while(count <= b)
        {
            tem2 = tem2->next;
            count++;
        }
        temp->next = tem2;
        return list1;
    }
};