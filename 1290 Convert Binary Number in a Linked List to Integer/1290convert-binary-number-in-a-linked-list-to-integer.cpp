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
    int getDecimalValue(ListNode* head) {
        ListNode *t = head,*p = head;
        int a=0,b=0;
        while(t){
            a++;
            t = t->next;
        }
        while(p){
            b += (p->val * pow(2,a-1));
            a--;
            p = p->next;
        }
        return b;
    }
};