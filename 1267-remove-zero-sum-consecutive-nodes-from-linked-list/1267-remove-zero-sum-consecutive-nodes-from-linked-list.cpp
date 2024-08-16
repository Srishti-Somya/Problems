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
    ListNode* removeZeroSumSublists(ListNode* head) {
        int prefixsum = 0;
        unordered_map<int, ListNode* > mp;
        ListNode* dummynode = new ListNode(-1001);
        mp[0] = dummynode;
        dummynode->next = head;
        while( head != nullptr)
        {
            prefixsum += head->val;
            if(mp.find(prefixsum) != mp.end())
            {
                ListNode* temp = mp[prefixsum];
                ListNode* start = mp[prefixsum];
                int psum = prefixsum;
                while(temp != head)
                {
                    temp = temp->next;
                    psum += temp->val;
                    if(temp != head)
                        mp.erase(psum);
                    
                }
                start->next = head->next;
            }
            else
            {
                mp[prefixsum] = head;
            }
            head = head->next;
        }
        return dummynode->next;
    }
};