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
    unordered_set<int> st;

FindElements(TreeNode* root) {
    queue<TreeNode*> q;

    root->val = 0;
    st.insert(0);
    q.push(root);

    while (!q.empty()) {
        TreeNode* node = q.front();
        q.pop();

        if (node->left) {
            node->left->val = 2 * node->val + 1;
            st.insert(node->left->val);
            q.push(node->left);
        }

        if (node->right) {
            node->right->val = 2 * node->val + 2;
            st.insert(node->right->val);
            q.push(node->right);
        }
    }
}
    
    bool find(int target) {
        if(st.count(target)) return 1;
        else return 0;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */