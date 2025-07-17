/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if(head == nullptr) return nullptr;
        
        Node* curr = head;
        while(curr != nullptr){
            Node* temp = nullptr;
            if(curr->child != nullptr){
                temp = curr->next;
                curr->next = flatten(curr->child);
                curr->next->prev = curr;
                curr->child = nullptr;
            
            while(curr->next != nullptr){
                curr = curr->next;
            }
            if(temp != nullptr){
                curr->next = temp;
                temp->prev = curr;
            }
            }
            curr = curr->next;
        }
        return head;
    }
};