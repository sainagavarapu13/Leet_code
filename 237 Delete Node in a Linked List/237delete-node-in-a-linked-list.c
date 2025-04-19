/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 typedef struct ListNode node;
void deleteNode(struct ListNode* n) {
     node* temp = n->next;
    n->val = temp->val;
    n->next = temp->next;  
}