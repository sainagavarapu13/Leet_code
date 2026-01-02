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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head||k==0||!head->next) return head;
        ListNode* temp = head;
        int cnt = 1;
        while(temp->next){
            cnt++;
            temp=temp->next;
        }
        if(k%cnt==0) return head;
        int to_head = cnt - (k%cnt);
        temp =head;
        while(to_head--){
            
            temp = temp ->next;
        }
        ListNode* t1=head;
        while(t1){
            if(t1->next==temp){
                t1->next = nullptr;
            }
            t1=t1->next;
        }
        ListNode* t=temp;
        while(t->next!=nullptr){
            t=t->next;
        }
        t->next = head;
        return temp;
    }
};