/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 typedef struct ListNode node;
int pairSum(struct ListNode* head) {
    node * temp = head;
    int cnt =0;
    while( temp ){
        cnt++;
        temp = temp->next;
    }
    int a[cnt];
    temp = head;
    int k=0;
    while( temp){
        a[k++] = temp->val;
        temp = temp->next;
    }
    int max =0;
    for( int i= 0;i<cnt/2;i++){
        int sum = a[i]+a[cnt-i-1];
        if( max<sum) max = sum;
    }
    return max;
}