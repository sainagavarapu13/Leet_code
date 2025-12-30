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
    void reorderList(ListNode* head) {
        vector<ListNode*> v;
        ListNode *temp = head;
        int a =0;
        while(temp!=NULL){
            v.push_back(temp);
            a++;
            temp = temp->next;
        }
        int b = v.size()-1;
        if(a%2==0){
            a = (a/2)+1;
        }
        else{
            a =a/2;
        }
        ListNode *t = head;
        for(int i=0;i<a;i++){
            ListNode *p = v[b--];
            ListNode *h = t->next;
            t->next = p;
            // cout<<t->val<<" "<<p->val<<" "<<h->val<<endl;
            // cout<<t->next<<"-"<<p<<endl;
            p->next = h;
            t = h;
            if(h->next == v[b+1]){
                h->next = NULL;
                // cout<<"1"<<endl;
                break;
            }
            if(h->next->next == v[b+1]){
                h->next->next = NULL;
                // cout<<"2"<<endl;
                break;
            }
        }
    }
};