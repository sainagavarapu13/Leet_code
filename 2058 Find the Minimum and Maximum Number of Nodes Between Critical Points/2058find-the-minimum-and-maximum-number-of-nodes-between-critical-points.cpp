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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>a;
       
        if( head == NULL || head->next == NULL || head->next->next == NULL) return {-1,-1};
         ListNode* temp = head->next;
        ListNode* pre = head;
        ListNode* pos = head->next->next;
        int cnt =1;
        while(pos){
            if((pre->val > temp->val && temp->val < pos->val) || (pre->val < temp->val && temp->val > pos->val)) a.push_back(cnt);
            cnt++;
           pos= pos->next;
           temp = temp->next;
           pre = pre->next;
        }
          if (a.size() < 2)
            return {-1, -1};

        int mini =INT_MAX;
        for( int i=0;i<a.size()-1;i++){
            mini = min(mini , abs(a[i]-a[i+1]));
        } 

        return {mini, a.back()-a[0]};
    }
};