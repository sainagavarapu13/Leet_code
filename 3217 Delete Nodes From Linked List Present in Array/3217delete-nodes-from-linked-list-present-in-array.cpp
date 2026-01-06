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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> s(nums.begin(),nums.end());
        ListNode* temp = new ListNode(0,head);
        ListNode* t = temp;
        while(t->next!=nullptr){
            if(s.count(t->next->val)){
                t->next = t->next->next;
            }
            else{
                t = t->next;
            }
        }
        return temp->next;
    }
};