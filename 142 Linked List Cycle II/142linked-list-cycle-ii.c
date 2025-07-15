/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 typedef struct ListNode node;
struct ListNode *detectCycle(struct ListNode *head) {
       if(head==NULL || head->next == NULL) return NULL;
       node* s = head;
      node* f = head;
       while(f && f->next){
        f = f->next->next;
        s = s->next;
        if(s==f){
            s = head;
            while(s!=f){
                s = s->next;
                f = f->next;
            }
            return s;
        }
       }
       return NULL;
}