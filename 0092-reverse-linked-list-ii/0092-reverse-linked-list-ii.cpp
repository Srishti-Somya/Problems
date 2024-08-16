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
    ListNode* reverselist(ListNode* head)
    {
        ListNode *pnode = nullptr, *cnode = head, *nnode = nullptr;
        while(cnode != nullptr)
        {
            nnode = cnode->next;
            cnode->next = pnode;

            pnode = cnode;
            cnode = nnode;
        }
        return pnode;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* newlist = new ListNode(-600);
        ListNode* list = newlist;
        int count = 1;
        ListNode* temp = head;
        while(temp != nullptr)
        {
            if(count == left)
            {
                ListNode* reverse = new ListNode(temp->val);
                temp = temp->next;
                count++;
                ListNode* curr = reverse;
                while(count <= right && temp != nullptr)
                {
                    curr->next = new ListNode(temp->val);
                    curr = curr->next;
                    temp = temp->next;
                    count++;
                }
                list->next = reverselist(reverse);
                while(list->next != nullptr)list = list->next;
            }
            else
            {
                list->next = new ListNode(temp->val);
                list = list->next;
                temp = temp->next;
                count++;
            }
        }
        return newlist->next;
    }
};