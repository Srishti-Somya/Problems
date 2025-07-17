/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == nullptr) return head;
        Node* newhead = new Node(head->val);
        Node* old_temp = head->next;
        Node* new_temp = newhead;
        unordered_map<Node*, Node*>mp;
        mp[head]=newhead;
        while(old_temp != nullptr){
            Node* newNode = new Node(old_temp->val);
            mp[old_temp] = newNode;
            new_temp->next = newNode;
            new_temp = new_temp->next;
            old_temp = old_temp->next;
            
        }
        old_temp = head;
        new_temp = newhead;
        while(old_temp != nullptr){
            Node* temp = old_temp->random;
            new_temp->random = mp[temp];
            old_temp = old_temp->next;
            new_temp = new_temp->next;
        }
        return newhead;
    }
};