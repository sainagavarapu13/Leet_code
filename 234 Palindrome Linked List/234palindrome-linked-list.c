/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 
bool isPalindrome(struct ListNode* head) {
    int a[100001]={0};
    int k=0;
    struct ListNode *temp=head;
    while(temp){
        a[k++]=temp->val;
        temp=temp->next;

    }
    int start=0;
    int end=k-1;
    if(k==0) return 1;
    while(start<end){
        if(a[start]!=a[end]){
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}