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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode *temp =head;
        ListNode *p = head->next,*g = nullptr;
        while(temp && temp->next){
            ListNode *np = temp->next->next;
            ListNode *s = temp->next;
            s->next = temp;
            temp->next = np;
            if(g){
                g->next = s;
            }
            g = temp;
            temp = np;
        }
        return p;
    }
};