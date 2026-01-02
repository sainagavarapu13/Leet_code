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
    ListNode* removeZeroSumSublists(ListNode* head) {
        vector<int> v;
        if(head==NULL) return nullptr;
        ListNode *temp = head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }
        int a = v.size();
        bool n = true;
        while(n){
            n = false;
            for(int i=0;i<a;i++){
                int sum = 0;
                for(int j=i;j<a;j++){
                    sum += v[j];
                    if(sum==0){
                        v.erase(v.begin()+i,v.begin()+j+1);
                        //cout<<i<<" "<<j<<endl;
                        n = true;
                        break;
                    }
                    // cout<<1<<endl;
                }
                if(n) break;
            }
            a = v.size();
            // cout<<1<<endl;
        }
        if(v.size()==0) return nullptr;
        ListNode *t = new ListNode(v[0]);
        ListNode *h = t;
        for(int i=1;i<v.size();i++){
            ListNode *p = new ListNode(v[i]);
            h->next = p;
            h = p;
        }
        return t;
    }
};