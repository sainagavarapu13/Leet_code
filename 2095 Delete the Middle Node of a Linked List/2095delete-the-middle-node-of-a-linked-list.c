/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 typedef struct ListNode node;
struct ListNode* deleteMiddle(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        // Empty list or single node: return NULL
        free(head);
        return NULL;
    }

    node *temp = head;
    int cnt = 0;
    while (temp) {
        temp = temp->next;
        cnt++;
    }

    int mid = cnt / 2; 
    temp = head;
    for (int i = 0; i < mid - 1; i++) {
        temp = temp->next;
    }

    node *toDelete = temp->next;
    temp->next = temp->next->next;
    free(toDelete);

    return head;
}