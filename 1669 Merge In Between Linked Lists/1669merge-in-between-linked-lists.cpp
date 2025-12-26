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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *t = list1,*p = list1,*q = list2;
        while(q->next!=NULL){
            q = q->next;
        }
        // cout<<q->val<<endl;
        int c=1,d=0;
        while(c<a){
            t = t->next;
            c++;
        }
        // cout<<t->val<<endl;
        while(d<=b){
            p = p->next;
            d++;
        }
        // cout<<p->val<<endl;
        t->next = list2;
        q ->next = p;
        return list1;
    }
};