/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */typedef struct ListNode node;
int getDecimalValue(struct ListNode* head) {
    node * temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }int sum=0,val;
    temp = head;
    while(temp!=NULL&&cnt-1>=0){
  val=temp->val;
  sum+=val*(pow(2,cnt-1));
  temp=temp->next;
  cnt--;
    }
    return sum;
}