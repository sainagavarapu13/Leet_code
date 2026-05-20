/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
         queue<Node*>q;
        vector<vector<int>>ans;
        if(!root) return ans;
        q.push(root);
        while(!q.empty()){
            vector<int>temp;
            int len=q.size();
            for(int i=0;i<len;i++){
                auto x = q.front();
                q.pop();
                temp.push_back(x->val);
                for(auto & i:x->children){
                    q.push(i);
                }
            }
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};