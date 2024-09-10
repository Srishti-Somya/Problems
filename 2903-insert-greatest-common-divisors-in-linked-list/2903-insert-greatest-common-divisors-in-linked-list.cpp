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
    int hcf(int a, int b)
    {
        int res = min(a,b);
        while(res > 0)
        {
            if(a%res == 0 && b%res == 0)
            {
                break;
            }
            res--;
        }
        return res;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head == nullptr || head->next == nullptr)
        {
            return head;
        }
        ListNode* temp = head;
        vector<int>gcd;
        while(temp->next!= nullptr)
        {
            gcd.push_back(hcf(temp->val, temp->next->val));
            temp = temp->next;
        }
        ListNode *dummylist = new ListNode(-1);
        ListNode *curr = dummylist;
        ListNode *temp1 = head;
        curr->next = temp1;
        curr = curr->next;
        temp1 = temp1->next;
        bool list = false;
        int i = 0;
        while(temp1 != nullptr)
        {
            if(list == true)
            {
                curr->next = temp1;
                curr = curr->next;
                temp1 = temp1->next;
                list = false;
            }
            else
            {
                ListNode *new_node = new ListNode(gcd[i]);
                i++;
                curr->next = new_node;
                curr = curr->next;
                list = true;
            }
        }
        return dummylist->next;
    }
};