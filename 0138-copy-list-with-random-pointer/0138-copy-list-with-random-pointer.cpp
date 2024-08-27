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
        // Node* newlist = new Node(-1);
        // Node* curr = newlist;
        Node* temp = head;
        unordered_map< Node* , Node* > mp;
        int n = 0;
        while(temp != nullptr)
        {
            Node* newnode = new Node(temp->val);
            // curr->next = newnode;
            mp[temp] = newnode;
            // n++;
            // curr = curr->next;
            temp = temp->next;
        }
        temp = head;
        while(temp != nullptr)
        {
            // if(temp->random == nullptr)
            // {
            //     curr->random = nullptr;
            // }
            // else
            Node* copyNode = mp[temp];
            copyNode->next = mp[temp->next];
            copyNode->random = mp[temp->random];
            temp = temp->next;
        }
        return mp[head];
    }
};