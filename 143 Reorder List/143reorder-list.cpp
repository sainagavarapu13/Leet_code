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
    void reorderList(ListNode* head) {
        vector<ListNode*>a;
        ListNode* temp = head;
        while(temp){
            a.push_back(temp);
            temp = temp->next;
        }
       int s =1, e=a.size()-1;
       head->next = a[e];
       e--;
       temp = head->next;
       while( s<e){
        temp->next = a[s];
        temp = temp->next;
        temp->next = a[e];
        temp = temp->next;
        s++;
        e--;

       }
        if (s == e) {
            temp->next = a[s];
            temp = temp->next;
        }

       temp->next = NULL;
    }
};