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
    void insertAtEnd(ListNode*& tail, int data) {
        ListNode* newnode = new ListNode(data);
        tail->next = newnode;
        tail = newnode;
    }
    ListNode* delete_list(ListNode* head, int value)
    {
        while(head->val == value)
        {
            head = head->next;
        }
        ListNode* prev = head;
        ListNode* temp = prev->next;
        while( temp->next != nullptr )
        {
            if(temp->val == value)
            {
                prev->next = temp->next;
            }
            if(prev)
            prev = temp;
            temp = prev->next;
        }
        if(prev->val == value)
        {
            prev->next = nullptr;
        }
        return head;
    }
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        
        // for(int i = 0 ; i < nums.size() ; i++ )
        // {
        //     head = delete_list(head, nums[i]);
        // }
        // return head;
        unordered_set<int> numSet(nums.begin(), nums.end());

        ListNode* ans = new ListNode(0);  
        ListNode* tail = ans;  
        ListNode* temp = head;

        
        while (temp != nullptr) {
            if (numSet.find(temp->val) == numSet.end()) {
                insertAtEnd(tail, temp->val);
            }
            temp = temp->next;  }

        return ans->next;
    }
};