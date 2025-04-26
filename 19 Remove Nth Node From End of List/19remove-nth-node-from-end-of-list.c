/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 typedef struct ListNode node;
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    node *temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    temp=head;
    int p=cnt-n;
    if(p==0) {
         node *l=head;
         head=head->next;
         free(l);
         return head;
    }
    for(int i=1;i<p;i++){
        temp=temp->next;
    }
    node *t=temp->next;
    temp->next=temp->next->next;
    free(t);
    return head;
}