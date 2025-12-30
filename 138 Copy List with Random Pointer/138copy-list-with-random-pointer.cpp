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
        unordered_map<Node*, Node*>a;
        Node* temp = head;
        while(temp){
           a[temp] = new Node(temp->val);
           temp =temp->next; 
        }
        temp = head; 
         while(temp){
           a[temp]->next= (temp->next)? a[temp->next]:NULL;
           a[temp]->random = ( temp->random)?a[temp->random]:NULL;
           temp =temp->next; 
        }
        return a[head];
    }
};