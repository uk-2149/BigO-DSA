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
        if(!head) return head;
        unordered_map<Node*, Node*> nodes;
        Node* newL = new Node(head->val);

        nodes[head] = newL;

        Node* temp = head->next;
        Node* prev = newL;

        while(temp!=nullptr) {
            Node* newN = new Node(temp->val);
            nodes[temp] = newN;
            prev->next = newN;
            prev = newN;
            temp = temp->next;
        }

        temp = head;
        Node* tempN = newL;

        while(temp!=nullptr) {
            if(temp->random) {
                tempN->random = nodes[temp->random];
            } else {
                tempN->random = nullptr;
            }
            temp = temp->next;
            tempN = tempN->next;
        }
        return newL;
    }
};