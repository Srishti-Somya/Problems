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
    ListNode* reverseList(ListNode* head)
    {
        ListNode* cnode = head;
        ListNode *pnode = nullptr;
        ListNode* nnode = nullptr;
        while( cnode != nullptr)
        {
            nnode = cnode->next;
            cnode->next = pnode;

            pnode = cnode;
            cnode = nnode;
        }
        return pnode;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* newlist = new ListNode(-1);
        ListNode* list = newlist;
        int copy_k = k;
        while(temp != nullptr)
        {
            ListNode* groups = new ListNode(-1);
            ListNode* curr = groups;
            ListNode* temp2 = temp;
            while(temp!= nullptr && copy_k)
            {
                if(temp != nullptr)
                {
                    curr->next = new ListNode(temp->val);
                    temp = temp->next;
                    curr = curr->next;
                }
                copy_k--;
            }
            if(copy_k == 0)
            {
                list->next = reverseList(groups->next);
                list = list->next;
                while(list->next != nullptr)
                {
                    list = list->next;
                }
                copy_k = k;
            }
            else
            {
                temp = temp2;
                break;
                // if(temp2 != nullptr)
                // list->next = new ListNode(temp2->val);
                // list = list->next;
                // temp = temp2;
                // temp = temp->next;
                // while(temp != nullptr && list->next != nullptr)
                // {
                //     list->next = new ListNode(temp->val);
                //     list = list->next;
                //     temp = temp->next;
                //     // list = list->next;
                // }
            }
        }
        while(temp != nullptr)
        {
            list->next = new ListNode(temp->val);
            list = list->next;
            temp = temp->next;
        }
        return newlist->next;
    }
};