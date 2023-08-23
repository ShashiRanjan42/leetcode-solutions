/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        ListNode* temp = node;
        ListNode*temp2 = node->next;
        node = node->next->next;
        temp->next = node;
        delete temp2;

        // solution directly
        // node->val = node->next->val;
        // node->next = node->next->next;
    }
};