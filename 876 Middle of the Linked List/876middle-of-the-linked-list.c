/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */typedef struct ListNode node;
struct ListNode* middleNode(struct ListNode* head) {
    int cnt=0;
    node *temp =head;
    while(temp){
        cnt++;
        temp=temp->next;
    }
    int mid=cnt/2;
    while(mid!=0){
mid--;
        head=head->next;

    }
    return head;
}