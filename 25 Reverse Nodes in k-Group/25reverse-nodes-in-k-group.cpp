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
   
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* pre_g = nullptr;
        ListNode* new_head = nullptr;
        while(temp ){
            ListNode* dump=temp;
            for(int i=0;i<k;i++){
                if( !temp) {return new_head?new_head:head;
                }
                temp = temp->next;
            }
            ListNode* pre = temp;
             ListNode* cur =dump;
            for( int i=0;i<k;i++){
                 ListNode* node = cur ->next;
                    cur->next = pre;
                    pre= cur;
                    cur = node;
            }
            if( !new_head){
                new_head =pre;
            }
        if( pre_g){
            pre_g->next = pre;
        }
        pre_g = dump;
          //  fun( dump,temp)

        }
        return new_head;
    }
};