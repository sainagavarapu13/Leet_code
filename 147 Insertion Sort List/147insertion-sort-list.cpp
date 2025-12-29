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
    ListNode* insertionSortList(ListNode* head) {
        if(head==NULL) return NULL;
        vector<int>v;
        ListNode *temp = head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        sort(v.begin(),v.end());
        ListNode *p = new ListNode();
        ListNode *te = p;
        int a = 0,n=v.size();
        while(a<n){
            if(a==0){
                p->val = v[a++];
                p->next =NULL;
            }
            else{
                ListNode *t = new ListNode();
                t->val = v[a++];
                p->next = t;
                p = t;
            }
        }
        return te;
    }
};