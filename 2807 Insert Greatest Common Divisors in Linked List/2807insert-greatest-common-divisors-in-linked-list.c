/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* Creat_A_Node(int val) {
    struct ListNode *newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newnode->val = val;
    newnode->next = NULL;
    return newnode;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

typedef struct ListNode node;
struct ListNode* insertGreatestCommonDivisors(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head; 
    }
    
    node *temp = head;
    while (temp != NULL && temp->next != NULL) {
        int val = gcd(temp->val, temp->next->val);
        node* nn = Creat_A_Node(val);
        node* k = temp->next;
        temp->next = nn;
        nn->next = k;
        temp = k; 
    }
    return head;
}