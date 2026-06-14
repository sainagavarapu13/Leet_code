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
    int pairSum(ListNode* head) {
        int cnt=0;
        ListNode* temp=head;
        while(temp){
            cnt++;
            temp=temp->next;
        }
        vector<int>a((cnt/2)+1,0);
        temp=head;
        int c=0,ans=INT_MIN;
        while(temp){
            c++;
            if(c<=(cnt/2)){
                a[c]+=temp->val;
                ans=max(ans,a[c]);
            }
            else{
                a[cnt-c+1]+=temp->val;
                ans=max(ans,a[cnt-c+1]);
            }
            temp=temp->next;
        }
        return ans;
    }
};