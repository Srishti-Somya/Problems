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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // int carry = 0;
        // int value = 0;
        // if( l1 != nullptr)
        //     {
        //         value += l1->val;
        //     }
        //     if(l2 != nullptr)
        //     {
        //         value += l2->val;
        //     }
        //     value += carry;
        //     carry = value / 10;
        // if(value >= 10)
        // {
            
        //     value = value % 10;
        // }
        
        // ListNode* newnode = new ListNode(value);
        // ListNode* temp = newnode;
        // l1 = l1 -> next;
        // l2 = l2 -> next;
        // value = 0;
        // while( l1 != nullptr || l2 != nullptr )
        // {
        //     if( l1 != nullptr)
        //     {
        //         value += l1->val;
        //     }
        //     if(l2 != nullptr)
        //     {
        //         value += l2->val;
        //     }
        //     value += carry;
        //     carry = value / 10;
        //     if(value >= 10)
        //     {
        //         value = value % 10;
        //     }
        
        //     ListNode* newnode1 = new ListNode(value);
        //     temp->next = newnode1;
        //     temp = temp->next;
        //     if(l1 != nullptr)l1 = l1->next;
        //     if(l2 != nullptr)l2 = l2->next;
        //     value = 0;
        // }
        // return newnode;
        ListNode* new_list = nullptr;
    
    int sum = 0;

    while(l1 != nullptr || l2 != nullptr)
    {
        ListNode* new_node = new ListNode;
        
        if (l1 != nullptr) {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2 != nullptr) {
            sum += l2->val;
            l2 = l2->next;
        }

        new_node->val = sum % 10;
        sum = sum / 10;
        new_node->next = nullptr;

        if(new_list == nullptr)
        {
            new_list = new_node;
        }
        else
        {
            ListNode* temp = new_list;
            while(temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = new_node;
        }
    }   
    if (sum > 0) {
        ListNode* final_carry = new ListNode(sum);
        ListNode* temp = new_list;
        while(temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = final_carry;
    }
    return new_list;
    }
};