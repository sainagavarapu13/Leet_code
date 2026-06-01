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
        ListNode*prev=NULL;
        while(head){
            ListNode* next=head->next;
            head->next=prev;
            prev=head;
            head=next;
        }
        return prev;
    }
    ListNode* doubleIt(ListNode* head) {
        ListNode* temp=rev(head);
        ListNode* t=temp;
        int carry=0;
        while(temp){
            int add = carry+(2*temp->val);
            temp->val=add%10;
            carry=add/10;
             if(temp->next==NULL&&carry){
                temp->next=new ListNode(carry);
                carry=0;


                break;
            }
            temp=temp->next;
        }
        
        t=rev(t);
        return t;
    }
};