/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 int gcd(int a,int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
 }
 typedef struct ListNode node;
struct ListNode* insertGreatestCommonDivisors(struct ListNode* head) {
 node *temp=head;
 while(temp&&temp->next){
    int g=gcd(temp->val,temp->next->val);
    node *nn=(node*)malloc(sizeof(node));
    nn->val=g;
    nn->next=temp->next;
    temp->next=nn;
    temp=nn->next;
 }   
 return head;
}