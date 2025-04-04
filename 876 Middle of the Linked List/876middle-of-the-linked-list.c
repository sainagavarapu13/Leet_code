/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 typedef struct ListNode node;
struct ListNode* middleNode(struct ListNode* head) {
    node * temp = head;
    int cnt =0;
    while(temp){
        temp= temp->next;
        cnt++;
    }
    int key = cnt/2;
    while( key!=0){
        key--;
         head=head->next;

    }
    return head;
}