/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode *head= (struct ListNode*)malloc(sizeof(struct ListNode));
    head->val = -1;
    head->next = NULL;
    struct ListNode* nn = head;
    struct ListNode* temp1 = list1;
    struct ListNode* temp2 = list2;
     while( temp1!=NULL && temp2!=NULL){
        if( temp1->val < temp2->val){
            nn->next = temp1;
           nn = nn->next;
            temp1 = temp1->next;

              
        }else{
            nn->next = temp2;
           nn = nn->next;
            temp2 = temp2->next;

              
        }
           
     }
    if( temp1 !=NULL){
        nn->next = temp1;
    }if( temp2 !=NULL){
       nn->next = temp2;
    }
    
    return head->next;
}