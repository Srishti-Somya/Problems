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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == right) return head;
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* rightnode = head, *leftnode = head, *prevnode = head, *nextnode = head;
        int i = 1;
        while(i < left){
            prevnode = leftnode;
            leftnode = leftnode->next;
            i++;
        }
        rightnode = leftnode;
        while(i < right){
            rightnode = rightnode->next;
            i++;
        }
        nextnode = rightnode->next;
        ListNode *cnode = leftnode, *pnode = nextnode, *nnode = nullptr;
        while(cnode != nextnode){
            nnode = cnode->next;
            cnode->next = pnode;
            pnode = cnode;
            cnode = nnode;
        }
        if(left != 1) prevnode->next = pnode;
        else head = pnode;
        return head;
    }
};