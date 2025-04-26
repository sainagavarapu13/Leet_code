/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 typedef struct ListNode node;
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    node *temp = head;
    int cnt=0;
    while(temp){
        temp=temp->next;
        cnt++;
    }
    temp = head;
    int p=cnt-n;
    if( p==0){
        node * l = head;
        head = head->next;
        free(l);
        return head;
    }
     for( int i=1;i<p;i++){
        temp = temp->next;
     }  
     node * pol = temp->next;
     temp->next = temp->next->next;
    free(pol);
    return head;
}