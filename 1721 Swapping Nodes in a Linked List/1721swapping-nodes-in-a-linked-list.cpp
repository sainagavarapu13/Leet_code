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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *f = head;
        for(int i=1;i<k;i++){
            f = f->next;
        }
        ListNode *lf = f;
        ListNode *s = head;
        while(f->next!=nullptr){
            f = f->next;
            s = s->next;
        }
        int temp = s->val;
        s->val = lf->val;
        lf->val = temp;
        return head;
    }
};