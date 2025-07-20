/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode *head;
 struct ListNode *tail;
 struct ListNode *creat_node(int val){
    struct ListNode *nn=(struct ListNode *)malloc(sizeof(struct ListNode ));
    nn->val=val;
    nn->next=NULL;
    return nn;
 }
 void insert(int val){
    struct ListNode *nn=creat_node(val);
    if(head==NULL){
        head=nn;
        tail=nn;
    }
    else{
        tail->next=nn;
        tail=nn;
    }
 }
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    head=NULL;
    tail=NULL;
    long long carry=0,sum;
    struct ListNode *temp1=l1;
    struct ListNode *temp2=l2;
    long long a,b;
    while(temp1!=NULL||temp2!=NULL||carry){
        sum=0;
        if(temp1!=NULL) a=temp1->val;
        else a=0;
        if(temp2!=NULL)  b=temp2->val;
        else b=0;
        
        sum=carry+a+b;
        carry=sum/10;
        insert(sum%10);
      if(temp1!=NULL)  temp1=temp1->next;
     if(temp2!=NULL)   temp2=temp2->next;
    }
    return head;
}