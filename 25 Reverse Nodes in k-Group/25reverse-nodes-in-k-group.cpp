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
    ListNode* rev(ListNode* start , ListNode* end){
        ListNode* temp=start,*prev=NULL ; 
        end=end->next;
        while(temp!=end){
            ListNode* next = temp->next;
            temp->next=prev;
            prev=temp;
            temp=next;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head,*start = NULL,*end=NULL,*prev=NULL,*next=NULL;
           ListNode* newHead = head;
        while(temp){
            start = temp;
          
            for(int i=1;i<k;i++){
                if(temp->next){
                    temp=temp->next;
                }
                else return newHead;
            }
            end=temp;
           
              next = end->next;
           temp= rev(start,end);
           if(prev)
           prev->next=temp;
           else newHead=temp;
            prev=start;
           start->next=next;
           prev=start;
           temp=next;
           
        }
        return newHead;
    }
};