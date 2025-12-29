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
    int numComponents(ListNode* head, vector<int>& nums) {
        ListNode *temp =  head;
        int a = 0,b=0;
        while(temp!=NULL){
            if(find(nums.begin(),nums.end(),temp->val)!=nums.end()){
                a++;
            }
            else{
                if(a>0){
                    b++;
                    a = 0;
                }
            }
            temp = temp->next;
        }
        if(a>0){
            b++;
        }
        return b;
    }
};