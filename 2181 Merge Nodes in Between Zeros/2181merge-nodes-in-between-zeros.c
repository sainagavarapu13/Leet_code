/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 typedef struct ListNode node;
struct ListNode* mergeNodes(struct ListNode* head) {
    if( head == NULL && head->next == NULL) return NULL;
    node * dum = (node*)malloc(sizeof(node));
    dum->val =0;
    dum->next = NULL;
    node * tail = dum;
    node * temp = head->next;
    int sum=0;
    while(temp){
        if( temp->val == 0){
            node * nn = (node*)malloc(sizeof(node));
            nn->val = sum;
            nn->next = NULL;
            tail->next = nn;
            tail = nn;
            sum=0;
        }else{
            sum+=temp->val;
        }
        temp = temp->next;
    }
    dum= dum->next;
    return dum;
}