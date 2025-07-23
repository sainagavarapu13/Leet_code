/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode* head;
 struct ListNode* tail;
 struct ListNode* creat_node(int val){
    struct ListNode* nn=(struct ListNode*)malloc(sizeof(struct ListNode));
    nn->val=val;
    nn->next=NULL;
    return nn;
 }
 void insert(int val){
    struct ListNode* nn=creat_node(val);
    if(head==NULL){
        head=nn;
        tail=nn;
    }
    else{
        tail->next=nn;
        tail=nn;
    }
 }
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* temp1=list1;
    struct ListNode* temp2=list2;
    head=NULL;
    tail=NULL;
    while(temp1!=NULL&&temp2!=NULL){
        if(temp1->val<temp2->val){
            insert(temp1->val);
            temp1=temp1->next;
        }
        else{
            insert(temp2->val);
            temp2=temp2->next;
        }
       
    }
    while(temp1!=NULL) {
        insert(temp1->val);
        temp1=temp1->next;
    }
    while(temp2!=NULL){
        insert(temp2->val);
        temp2=temp2->next;
    }
    return head;
}