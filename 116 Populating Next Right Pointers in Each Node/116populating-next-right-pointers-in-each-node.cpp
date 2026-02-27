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
        if(!root) return NULL;
        vector<vector<Node*>>a;
        q.push(root);
        while(!q.empty()){
            vector<Node*>temp;
            int len=q.size();
            for(int i=0;i<len;i++){
                Node * nn = q.front();
                temp.push_back(nn);
                if(nn->left) q.push(nn->left);
                if(nn->right) q.push(nn->right);
                q.pop();
            }
            a.push_back(temp);
        }
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a[i].size();j++){
                 if(j!=a[i].size()-1){
            a[i][j]->next = a[i][j+1];
           }
           else{
            a[i][j]->next = NULL;
           }
            }
          
        }

        return root;
    }
};