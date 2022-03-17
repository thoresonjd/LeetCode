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
private:
    void interpolateShadowCopy(Node* head) {
        Node* current = head;
        while (current) {
            Node* copy = new Node(current->val);
            copy->next = current->next;
            current->next = copy;
            current = copy->next;
        }
    }
    
    void copyRandomPointers(Node* head) {
        Node* current = head;
        Node* next = current->next;
        while (current && next) {
            next->random = current->random ? current->random->next : nullptr;
            current = next->next;
            next = current ? current->next : nullptr;
        }
    }
    
    Node* separateInterpolatedLists(Node* head) {
        Node* copy = head->next;
        Node* current = head;
        Node* next = head->next;
        while (current && next) {
            current->next = next->next;
            next->next = current->next ? current->next->next : nullptr;
            current = current->next;
            next = next->next;
        }
        return copy;
    }
    
public:
    Node* copyRandomList(Node* head) {
        if (!head) return nullptr;
        interpolateShadowCopy(head);
        copyRandomPointers(head);
        Node* copy = separateInterpolatedLists(head);
        return copy;
    }
};