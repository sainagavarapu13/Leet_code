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
          if (!head || !head->next) return head;
        ListNode* temp=head,*prev=NULL;
        head=head->next;
        while(temp&&temp->next){
            ListNode* thr = temp->next->next;
            ListNode* sec = temp->next;
            sec->next=temp;
            temp->next = thr;
            if(prev){
                prev->next=sec;
            }
            prev=temp;
            temp=temp->next;
        }
        return head;
    }
};