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
    ListNode* middleNode(ListNode* head) {
        int a=0;
        ListNode *t = head,*p=head;
        while(t){
            a++;
            t = t->next;
        }
            a = a/2;
        for(int i=0;i<a;i++){
            p = p->next;
        }
        return  p;
    }
};