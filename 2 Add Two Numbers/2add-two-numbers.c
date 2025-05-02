/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode node;
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    node *dummy = (node*)malloc(sizeof(node));
    dummy->val = 0;
    dummy->next = NULL;
    node *tail = dummy;
    int carry = 0;
    
    while (l1 != NULL || l2 != NULL || carry != 0) {
        int sum = carry;
        if (l1 != NULL) {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2 != NULL) {
            sum += l2->val;
            l2 = l2->next;
        }
        
        carry = sum / 10;
        node *newNode = (node*)malloc(sizeof(node));
        newNode->val = sum % 10;
        newNode->next = NULL;
        tail->next = newNode;
        tail = newNode;
    }
    
    node *result = dummy->next;
    free(dummy);
    return result;
}