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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL) return NULL;
        int a =0;
        ListNode *t = head;
        while(t!=NULL){
            a++;
            t = t->next;
        }
        a = a/2;
        int b = 0;
        t = head;
        while(b<a-1){
            t = t->next;
            b++;
        }
        t->next = t->next->next;
        return head;
    }
};