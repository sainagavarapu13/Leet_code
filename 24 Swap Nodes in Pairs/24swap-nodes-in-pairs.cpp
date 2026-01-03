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
        if( head== NULL || head->next == NULL)return head;
        ListNode* temp = head;
        ListNode* ans = NULL;
       ListNode * p = NULL;
        while(temp && temp->next){
            
            ListNode* n = temp->next;
             ListNode* od=  temp->next->next;
            temp->next = od;
            n->next = temp;
            if( ans == NULL) ans = n;
            else p->next = n;
            p = temp;
            temp = od;
           
        }
    return ans;
    }
};