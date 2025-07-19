/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

 struct ListNode *creat_node(int data){
    struct ListNode *nn=(struct ListNode*)malloc(sizeof(struct ListNode));
    nn->val=data;
    nn->next=NULL;
    return nn;
 }
 void insert(struct ListNode **head,int val,struct ListNode **tail){
    struct ListNode *nn=creat_node(val);
    if(*head==NULL) {
        *head=nn;
        *tail=nn;
    }
    else{
        (*tail)->next=nn;
        *tail=nn;
    }
 }
 void reverse(struct ListNode *head,struct ListNode **newhead,struct ListNode **tail){
    if(head==NULL) return ;

        reverse(head->next,newhead,tail);
        insert(newhead,head->val,tail);
    
 }
struct ListNode* reverseList(struct ListNode* head) {
  struct ListNode *newhead = NULL, *tail = NULL;
    reverse(head,&newhead,&tail);
    return newhead;
}