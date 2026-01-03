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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int cnt = 1;
        if(head==nullptr||left==right) return head;
        ListNode*temp = head;
         ListNode* before = nullptr;
        while(cnt!=left){
            before = temp;
            cnt++;
            temp=temp->next;
        }
       
        ListNode* t=temp;
        while(cnt!=right){
            cnt++;
            t=t->next;
        }
        ListNode* after = t->next;
        ListNode* next=nullptr;
        ListNode* prev = nullptr;
        ListNode* curr = temp;
        while(curr!=after){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        if(before!=nullptr)
        before->next = prev;
        else head=prev;

        temp->next= after;
        return head;
    }
};