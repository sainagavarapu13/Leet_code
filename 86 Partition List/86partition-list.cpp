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
    ListNode* partition(ListNode* head, int x) {
        ListNode *t = new ListNode(0);
        ListNode *p = new ListNode(0);
        ListNode *b =t,*a =p;
        while(head!=nullptr){
            if(head->val<x){
                b->next = head;
                b = b->next;
            }
            else{
                a->next = head;
                a = a->next;
            }
            head = head->next;
        }
        a->next = nullptr;
        b->next = p->next;
        return t->next;
    }
};