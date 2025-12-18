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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *temp = new ListNode();
        ListNode *head = temp;
        ListNode* t1 = list1;
        ListNode* t2 = list2;
        if(t1==NULL){
            return t2;
        }
        else if(t2==NULL){
            return t1;
        }
        else if(t1->val<=t2->val){
            temp->val = t1->val;
            temp->next = NULL;
            t1 = t1->next;
        }
        else{
            temp->val = t2->val;
            temp->next = NULL;
            t2 = t2->next;
        }
        while(t1 || t2){
            if(!t1){
            ListNode *t = new ListNode();
            t->val = t2->val;
            t->next = NULL;
            temp->next = t;
            temp = temp->next;
            t2 = t2->next;
        }
        else if(!t2){
            ListNode *t = new ListNode();
            t->val = t1->val;
            t->next = NULL;
            temp->next = t;
            temp = temp->next;
            t1 = t1->next;
        }
        else if(t1->val<=t2->val){
            ListNode *t = new ListNode();
            t->val = t1->val;
            t->next = NULL;
            temp->next = t;
            temp = temp->next;
            t1 = t1->next;
        }
        else{
            ListNode *t = new ListNode();
            t->val = t2->val;
            t->next = NULL;
            temp->next = t;
            temp = temp->next;
            t2 = t2->next;
        }
        }
        return head;
    }
};