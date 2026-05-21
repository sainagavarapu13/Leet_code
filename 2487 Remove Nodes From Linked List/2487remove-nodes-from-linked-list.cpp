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
    int maxi=INT_MIN;
    ListNode* rev(ListNode* head){
        if(!head) return NULL;
        head->next = rev(head->next);
         if(head->val < maxi){
             return head->next; 
         }
        maxi=max(maxi,head->val);
       return head;
    }
    ListNode* removeNodes(ListNode* head) {
        
        return rev(head);
    }
};