/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeInBetween(struct ListNode* head1, int a, int b, struct ListNode* list2){
    int i,j;
    struct ListNode *temp=head1;

    for(i=1;i<a;i++){
        temp=temp->next;
    }
    struct ListNode * temp3=head1;
    for(i=0;i<b+1;i++){
        temp3=temp3->next;
    }
    temp->next=list2;
    
    struct ListNode *temp2=list2;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp3;
   
    return head1;
}