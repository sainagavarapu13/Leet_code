/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode node;
struct ListNode* swapNodes(struct ListNode* head, int k) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    node *temp = head;
    int length = 0;
    while (temp != NULL) {
        length++;
        temp = temp->next;
    }
    node *first = head;
    for (int i = 1; i < k; i++) {
        first = first->next;
    }
    node *second = head;
    for (int i = 1; i < length - k + 1; i++) {
        second = second->next;
    }
    int temp_val = first->val;
    first->val = second->val;
    second->val = temp_val;
    
    return head;
}