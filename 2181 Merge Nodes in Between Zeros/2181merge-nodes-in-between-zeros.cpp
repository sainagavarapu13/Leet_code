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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *temp = head;
        ListNode *t = new ListNode();
        ListNode *q = t;
        while(temp->next!=NULL){
            ListNode *s = new ListNode();
            if(temp->val==0){
                int a = 0;
                ListNode *p = temp->next;
                while(p->val!=0){
                    a +=p->val;
                    p = p->next;
                }
                s->val = a;
                q->next = s;
                q = s;
                temp = p;
            }
        }
        return t->next;
    }
};