/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* temp = head;
       map<Node*,Node*>m;
       while(temp){
        m[temp]=new Node(temp->val);
        temp=temp->next;
       }
       Node* ans;
       ans = m[head];
       Node * t = ans;
       while(head){
        ans->next = head->next?m[head->next]:NULL;
        ans ->random = head->random?m[head->random]:NULL;
        head = head->next;
        ans = ans->next;
       }
    return t;

       
    }
};