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
        if(head==NULL) return NULL;
        vector<int> v;
        ListNode *t = head;
        while(t!=NULL){
            v.push_back(t->val);
            t= t->next;
        }
        int n = v.size();
        sort(v.begin(),v.end());
        int a =0;
        ListNode *temp = new ListNode();
        ListNode *p = temp;
        while(a<n){
            if(a==0){
                temp->val = v[a++];
                temp->next = NULL;
            }
            else{
                ListNode *h = new ListNode(v[a++]);
                temp->next = h;
                temp = h;
            }
        }
        return p;
    }
};