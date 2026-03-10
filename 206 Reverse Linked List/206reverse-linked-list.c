/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 typedef struct ListNode node;
struct ListNode* reverseList(struct ListNode* head) {
    node *tail= NULL;
    node *temp = head;
    while(temp!=NULL){
        node * nn = temp;
        temp = temp->next; // save prev node
        nn->next = tail; // link rev node
            tail= nn; 
        }
    
    return tail;
}