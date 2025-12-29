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
        int cnt=0;
        int b=0;
        ListNode* temp = head;
        while( temp){
            if( find(a.begin(),a.end(),temp->val)!=a.end()){
                temp=temp->next;
                b++;
            }
            else{
                if(b>0 )cnt++;
                b=0;
                temp = temp->next;
            }
        }
         if(b>0 )cnt++;
        return cnt;
        
    }
};