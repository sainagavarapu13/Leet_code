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
    ListNode* sortList(ListNode* head) {
        if( head==NULL) return NULL;
        vector<pair<int,ListNode*>>l;
        ListNode* temp = head;
        while( temp){
            l.push_back({temp->val,temp});
            temp=temp->next;
        }
        sort(l.begin(),l.end());
        ListNode* node =l[0].second;
         ListNode* te = node;
         for( int i=1;i<l.size();i++){
            te->next = l[i].second;
            te = te->next;
         }
         te->next = NULL;
        return node;
    }
};