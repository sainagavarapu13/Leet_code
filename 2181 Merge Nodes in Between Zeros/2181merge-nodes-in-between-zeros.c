/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode* creat_node(int data){
    struct ListNode *nn=(struct ListNode*)malloc(sizeof(struct ListNode));
    nn->val=data;
    nn->next=NULL;
    return nn;
 }
 struct ListNode *h=NULL;
 struct ListNode *t=NULL;
 void insert(int data){
    struct ListNode*nn=creat_node(data);
      struct ListNode *temp=h;
    if(h==NULL){
        h=nn;
        t=nn;
    }
    else{
       t->next=nn;
       t=nn;
    }
 }
struct ListNode* mergeNodes(struct ListNode* head) {
  
    struct ListNode *temp=head;
    h=NULL;
    t=NULL;
    while (temp && temp->val == 0) {
        temp = temp->next;
    }
    while(temp){
        int sum=0;
        // if(temp->val==0){
        //     temp=temp->next;
        // }
        while(temp&&temp->val!=0){
            sum+=temp->val;
            temp=temp->next;
        }
       if(sum!=0) insert(sum);
        if(temp) temp=temp->next;
    }
    return h;
}