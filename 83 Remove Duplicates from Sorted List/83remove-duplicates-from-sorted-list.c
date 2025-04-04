/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */typedef struct ListNode node;
struct ListNode* deleteDuplicates(struct ListNode* head) {
    node *temp=head;
    head=temp;
    while(temp!=NULL&&temp->next!=NULL){
        if(temp->val==temp->next->val){
            temp->next=temp->next->next;
        }
        else{
            temp=temp->next;
        }
    }
    return head;
}