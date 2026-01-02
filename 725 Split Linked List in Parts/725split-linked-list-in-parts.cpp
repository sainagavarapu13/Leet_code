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
        vector<ListNode*>a;
        ListNode * temp = head;
        while(temp){
            a.push_back(temp);
            temp = temp->next;
        }
        int cnt = a.size()%k;
        int div = a.size()/k;
        temp = head;
        vector<ListNode*>ans(k,NULL);
        int p=0;
        for( int i=0;p<k&&i<a.size();){
            ListNode * node = a[i];
            int f=0;
            if( cnt !=0){
                a[i+div]->next = NULL;
                cnt--;
                f=1;
            }else a[i+div-1]->next = NULL;
            ans[p]=node;
            p++;
            if( f) i+=div+1;
            else i+=div;
        }

        return ans;
    }
};