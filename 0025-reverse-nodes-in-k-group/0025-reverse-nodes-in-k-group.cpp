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
    ListNode* reverseList(ListNode* head){
        ListNode *cnode = head, *pnode = nullptr, *nnode = nullptr;
        while(cnode != nullptr){
            nnode = cnode->next;
            cnode->next = pnode;
            pnode = cnode;
            cnode = nnode;
        }
        return pnode;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp = head;
        int cnt = 0;
        //check for k nodes
        while(cnt < k){
            if(temp == nullptr) return head;
            temp = temp->next;
            cnt++;
        }
        // if exist only then reach here
        //call for recursion for rest of the LL
        ListNode *pnode = reverseKGroup(temp, k);
        //reverse the current group
        temp = head, cnt = 0;
        while(cnt < k){
            ListNode *nnode = temp->next;
            temp->next = pnode;
            pnode = temp;
            temp = nnode;
            cnt++;
        }
        return pnode;







        // ListNode* temp = head, *kthnode = head, *prevnode = nullptr, *nextnode = nullptr;
        // int value = k-1;
        // while(temp != nullptr){
        //     while(value){
        //         if(kthnode)kthnode = kthnode->next;
        //         value--;
        //     }
        //     if(!kthnode){
        //         prevnode->next = temp;
        //         break;
        //     }
        //     nextnode = kthnode->next;
        //     kthnode->next = nullptr;
        //     kthnode = reverseList(temp);
        //     if(temp == head){
        //         head = kthnode;
        //     }else{
        //         prevnode->next = kthnode;
        //     }

        //     prevnode = temp;
        //     temp = nextnode;
        //     kthnode = temp;
        //     value = k-1;
        // }
        // return head;
    }   
};