/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* t1=head,*t2=head;
        ListNode* prev=NULL;
        while(t1){
             while(t2&&t1->val==t2->val){
            t2=t2->next;
        }
        if(t1->next!=t2){
           if(prev) prev->next=t2;
           else head=t2;
        }
        else{
            prev=t1;
        }
        t1=t2;
        t2=t1;
        }
        return head;
    }
};