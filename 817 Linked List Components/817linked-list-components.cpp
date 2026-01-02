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
    int numComponents(ListNode* head, vector<int>& a) {
        set<int>s;
        for(auto& i:a) s.insert(i);
        ListNode* temp=head;
        int cnt=0;
        int f=0;
        while(temp){
            if(s.count(temp->val)){
                f=1;
            }
            if(!s.count(temp->val)&&f==1){
                cnt++;
                f=0;
            }
            if(temp->next==nullptr&&s.count(temp->val)) cnt++;
            temp=temp->next;
        }
        
        return cnt;
    }
};