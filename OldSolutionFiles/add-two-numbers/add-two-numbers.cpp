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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* current = new ListNode(), *res = current;
        int sum = 0;
        while (l1 || l2 || sum) {
            if (l1) sum += l1->val, l1 = l1->next; // Add l1->val to sum
            if (l2) sum += l2->val, l2 = l2->next; // Add l2->val to sum
            current->next = new ListNode(sum%10);  // New node val of sum's right-most digit
            current = current->next;                
            sum /= 10;                             // Comput carry-over (1 or 0)
        }
        return res->next;
    }
};
