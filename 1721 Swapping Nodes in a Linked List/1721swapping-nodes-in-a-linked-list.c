/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapNodes(struct ListNode* head, int k) {
    struct ListNode *temp=head;
    int cnt=0;
    while(temp){
        
        cnt++;
        temp=temp->next;
    }
    printf("%d",cnt);
    struct ListNode *t1=head;
    struct ListNode *t2=head;
     int m=k-1;
    while(m--){
        t1=t1->next;
    }
    m=cnt-k;
     while(m--){
         t2=t2->next;
    }
   int tem=t2->val;
   t2->val=t1->val;
   t1->val=tem;
   return head;
}