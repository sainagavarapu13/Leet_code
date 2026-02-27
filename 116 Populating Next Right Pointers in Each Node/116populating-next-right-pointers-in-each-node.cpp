/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        queue<Node*>q;
        if( root==NULL) return root;
        q.push( root);
        while( !q.empty()){
            int n = q.size()-1;
            Node * pre = q.front();
             if( pre->left!=NULL) q.push( pre->left);
                if( pre->right!=NULL) q.push(pre->right);
            Node* las = pre;
            q.pop();
            for( int i=0;i<n;i++){
                Node* node = q.front();
                q.pop();
                pre->next = node;
                pre = node;
                las = node;
                if( node->left!=NULL) q.push( node->left);
                if( node->right!=NULL) q.push(node->right);

            }
            las->next = NULL;
        }
        return root;
    }
};