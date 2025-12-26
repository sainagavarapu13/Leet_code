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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head->next==NULL) return head;
        ListNode *temp = head,*p= head->next;
        while(temp->next!=NULL){
            ListNode *t = new ListNode();
            int a = temp->val;
            int b = p->val;
            t->val = gcd(a,b);
            t->next = p;
            temp->next = t;
            temp = p;
            p = p->next;
        }
        return head;
    }
};