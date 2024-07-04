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
    ListNode* mergeNodes(ListNode* head) {
        head = head->next;
        int sum = head->val;
        ListNode *temp = head;

        ListNode *ans = new ListNode;
        ListNode *new_node = ans;

        while(temp != nullptr)
        {
            if(temp -> val == 0)
            {
                if(sum != 0)
                {
                    new_node -> val = sum;
                    if(temp->next != nullptr)
                    {
                        ListNode *node = new ListNode;
                        new_node -> next = node;
                        new_node = new_node->next;
                    }
                    else
                    {
                        new_node -> next = nullptr; 
                    }
                }
                sum = 0;
            }
            temp = temp -> next;

            if(temp != nullptr)
            {
                sum += temp -> val;
            }
            
        }
        // new_node = nullptr;
        return ans;
    }
};