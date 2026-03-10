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
    bool isPalindrome(ListNode* head) {
        stack<int>s;
        ListNode* c = head;
        while( c){
            s.push(c->val);
            c = c->next;
        }
        c= head;
        while( c && c->val == s.top()){
            c = c->next;
            s.pop();
        }
        return c==nullptr;
        
    }
};