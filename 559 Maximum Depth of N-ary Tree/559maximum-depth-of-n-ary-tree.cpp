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
    int maxDepth(Node* root) {
        if(!root) return 0;
        queue<pair<Node*,int>>q;
        q.push({root,1});
        int ans=1;
        while(!q.empty()){
            auto [x,y] = q.front();
            q.pop();
            ans=max(ans,y);
            for(auto& i:x->children){
                q.push({i,y+1});
            }
        }
        return ans;
    }
};