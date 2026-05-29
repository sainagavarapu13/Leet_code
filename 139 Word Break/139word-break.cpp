class Solution {
public:
    class Trie {
    public:
        unordered_map<char, Trie*> t;
        bool end = false;
    };
    Trie* node = new Trie();
    void insert(string s) {
        Trie* root = node;
        for (char c : s) {
            if (root->t[c] == NULL) {
                root->t[c] = new Trie();
            }
            root = root->t[c];
        }
        root->end = true;
    }
    bool search(int idx, string &s, vector<int>& dp) {
        if (idx == s.size()) return true;
        if (dp[idx] != -1) return dp[idx];
        Trie* root = node;
        for (int i = idx; i < s.size(); i++) {
            if (root->t.find(s[i]) == root->t.end()) {
                return dp[idx] = false;
            }
            root = root->t[s[i]];
            if (root->end) {
                if (search(i + 1, s, dp)) {
                    return dp[idx] = true;
                }
            }
        }
        return dp[idx] = false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        for (string word : wordDict) {
            insert(word);
        }
        vector<int> dp(s.size(), -1);
        return search(0, s, dp);
    }
};