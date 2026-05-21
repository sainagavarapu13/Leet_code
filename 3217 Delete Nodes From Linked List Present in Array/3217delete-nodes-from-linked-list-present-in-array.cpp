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
    ListNode* modifiedList(vector<int>& a, ListNode* head) {
        set<int>set;
        for(auto & i:a){
            set.insert(i);
        }
        ListNode* temp=head;
        ListNode* prev=NULL;
        while(temp){
           if(set.count(temp->val)){
            if(prev==NULL){
                 head=head->next;
            }
            else{
                prev->next=temp->next;
            }
           }
          else prev=temp;
            temp=temp->next;
        }
        return head;
    }
};