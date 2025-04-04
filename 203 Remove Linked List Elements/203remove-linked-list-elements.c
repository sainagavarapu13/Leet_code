/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 typedef struct ListNode node;
struct ListNode* removeElements(struct ListNode* head, int val) {
    node *temp = head;
    while( temp !=NULL && temp->val == val){
    
        temp = temp->next;
    
    }
    head = temp;
    while( temp != NULL && temp->next != NULL ){
        if( temp->next->val == val){
            temp->next =  temp->next->next;
           }else{
        temp = temp->next;
           }
    }
    return head;
    

}