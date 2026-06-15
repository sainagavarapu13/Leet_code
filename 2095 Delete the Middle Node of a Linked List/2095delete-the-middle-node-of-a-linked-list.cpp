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
    ListNode* deleteMiddle(ListNode* head) {
     int cnt=0;
     ListNode* temp=head;
     while(temp){
        cnt++;
        temp=temp->next;
     }   
     cnt=(cnt/2);
     int c=0;
     temp=head;
     while(temp){
        if(c==cnt-1){
            temp->next=temp->next->next;
            break;
        }
        else if(c==cnt){
            head=temp->next;
            break;
        }
        c++;
        temp=temp->next;
     }
     return head;
    }

};