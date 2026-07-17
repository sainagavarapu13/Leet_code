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
        if(!head||!head->next) return ;
        stack<ListNode*>st;
        ListNode* temp = head;
        while(temp!=NULL){
            st.push(temp);
            temp=temp->next;
        }
        temp = head;
        while(true){
            if(temp == st.top()||temp->next==st.top()){
                break;
            }
             ListNode* t = temp->next;
         
            temp->next = st.top();
        st.pop();
            temp->next->next = t;
            
            temp = t;
        }

         if (temp == st.top())
            temp->next = nullptr;         
        else
            temp->next->next = nullptr; 
    }
};