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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> v(k,nullptr);
        ListNode *temp = head;
        if(head==NULL) return v;
        int a=0;
        while(temp!=NULL){
            a++;
            temp = temp->next;
        }
        int c = a/k;
        int e = a%k;
        temp = head;
        for(int i=0;i<k;i++){
            if(!temp){
                v[i] = nullptr;
                continue;
            }
            v[i] = temp;
            int p = c + (e > 0 ? 1 : 0);
            for(int j=1;j<p;j++){
              temp=temp->next;   
            }
            ListNode *nxt = temp->next;
            temp ->next =nullptr;
            temp = nxt;
            e--;
        }
        return v;
    }
};