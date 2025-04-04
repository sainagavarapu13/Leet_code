/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 typedef struct ListNode node;
int getDecimalValue(struct ListNode* head) {
    int cnt=0;
    node * temp = head;
    while(temp){
       
        temp=temp->next;
         cnt++;
       
    }
    cnt= cnt-1;
    int num=0;
    temp = head;
    while( temp!=NULL && cnt>=0){
        if( temp->val == 1){
             num += pow(2,cnt);
        }
         temp = temp->next;
        cnt--;
    }
    return num;

    
}