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
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode* current = head;
        while (k-- > 1) 
            current = current->next;
        
        ListNode* first = current;
        ListNode* second = head;
        current = current->next;
        
        while (current) {
            second = second->next;
            current = current->next;
        }
        
        swap(first->val, second->val);
        
        return head;
    }
};