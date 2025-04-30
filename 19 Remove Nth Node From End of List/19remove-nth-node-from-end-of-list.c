/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* fast = head,*slow = head,*x;
    for(int i=1;i<=n;i++) fast = fast->next;
    if(fast==NULL) return head->next;
    else{
        while(fast!=NULL){
            x=slow;
            slow = slow->next;
            fast = fast->next;
        }
        x->next = slow->next;
    }
    return head;
}