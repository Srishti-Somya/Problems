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
    ListNode* sortList(ListNode* head) {
        map<int, int>mp;
        ListNode* temp = head;
        while( temp != nullptr )
        {
            mp[temp->val]++;
            temp = temp->next;
        }
        ListNode* newlist = new ListNode(INT_MIN);
        ListNode* curr = newlist;
        for(auto a = mp.begin() ; a != mp.end() ; )
        {
            curr->next = new ListNode(a->first);
            a->second = a->second - 1;
            if(a->second == 0)
            {
                a++;
            }
            curr = curr->next;
        }
        return newlist->next;
    }
};