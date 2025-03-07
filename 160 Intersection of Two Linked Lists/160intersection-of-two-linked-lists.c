/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 typedef struct ListNode n;
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    n *p1 = headA;
    n *p2 = headB;
    if( p1 == NULL || p2 == NULL){
            return NULL;
           
        }
     while( p1 != p2 ){
        p1 = (p1 == NULL)?headB:p1->next;
         p2 = (p2 == NULL)?headA:p2->next;
     }
     
    return p1;
    
}