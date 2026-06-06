class Solution {
public:
    class Trie {
    public:
        unordered_map<int, Trie*> t;
        bool end = false;
    };
    Trie* root = new Trie();
    vector<int> ans;
    void insert(int num) {
        string s = to_string(num);
        Trie* node = root;
        for (char c : s) {
            int d = c - '0';
            if (node->t.find(d) == node->t.end()) {
                node->t[d] = new Trie();
            }
            node = node->t[d];
        }
        node->end = true;
    }
    void dfs(Trie* node, string cur) {
        if (node->end) {
            ans.push_back(stoi(cur));
        }
        for (int d = 0; d <= 9; d++) {
            if (node->t.find(d) != node->t.end()) {
                dfs(node->t[d], cur + char('0' + d));
           }
        }
    }
    vector<int> lexicalOrder(int n) {
        for (int i = 1; i <= n; i++) {
            insert(i);
        }
        dfs(root, "");
        return ans;
    }
};