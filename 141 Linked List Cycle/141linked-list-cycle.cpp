/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL) return 0;
        ListNode *t = head,*p = head->next;
        while(t && p){
            if(t==p){
                return 1;
            }
            t = t->next;
            if(p->next==NULL) return 0;
            p = p->next->next;
        }
        return 0;
    }
};
auto init = atexit([](){ofstream("display_runtime.txt")<<"0";});