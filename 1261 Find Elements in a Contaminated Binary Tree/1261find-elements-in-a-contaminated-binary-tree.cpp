/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class FindElements {
public:
    TreeNode* root = NULL;
    queue<TreeNode*>q;
    set<int>set;
    FindElements(TreeNode* r) {
        root = r;
        root->val=0;
        q.push(root);
        set.insert(0);
        while(!q.empty()){
            TreeNode* pre = q.front();
            q.pop();
            if(pre->left){
                pre->left->val = (2*(pre->val))+1;
                q.push(pre->left);
                set.insert(2*(pre->val)+1);
            }
             if(pre->right){
                pre->right->val=(2*(pre->val)+2);
                q.push(pre->right);
                set.insert(2*(pre->val)+2);
            }
        }
    }
    
    bool find(int target) {
        return set.count(target);
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */