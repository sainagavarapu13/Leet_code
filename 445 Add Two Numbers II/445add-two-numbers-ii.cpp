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
    ListNode* rev(ListNode* head){
        ListNode* prev=NULL,*temp=head;
        while(temp){
            ListNode* next=temp->next;
            temp->next=prev;
            prev=temp;
            temp=next;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* first = rev(l1) , * sec=rev(l2) ;
        ListNode* ans=new ListNode(0),*temp=ans;
        int carry=0;

        while(first||sec){
            int fir=0,secc=0;
            if(first) fir=first->val;
            if(sec) secc=sec->val;
            int add = fir +secc + carry;
            ans->next = new ListNode(add%10);
            ans=ans->next;
            carry = add/10;
            // if(sec->next==NULL&&first->next==NULL&&carry!=0){
            //     ans->next = new ListNode(carry);
            //     break;
            // }
            if(first) first=first->next;
            if(sec) sec=sec->next;
        }
        if(carry){
            ans->next = new ListNode(carry);
        }
        return rev(temp->next);
    }
};