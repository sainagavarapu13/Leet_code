/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

typedef struct ListNode node;
struct ListNode* mergeInBetween(struct ListNode* head, int a, int b, struct ListNode* ele){
    node*temp = head;
    node * nn=NULL;
    int cnt=-1,re =-1;
    while( cnt <a-2){
         temp= temp->next;
         cnt++;
       
       }
       node * pos1 = temp;
        while( cnt < b){
                temp= temp->next;
                 cnt++;
       
       }
      
    nn = temp;
    pos1->next = ele;
    while( ele->next !=NULL){
        ele=ele->next;
    }
    ele->next = nn;
    
   return head;

}