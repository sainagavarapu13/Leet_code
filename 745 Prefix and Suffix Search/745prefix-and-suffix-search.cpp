class WordFilter {
public:
    class Node {
    public:
        unordered_map<char, Node*> t;
        int ind = -1;
    };
    Node* node = new Node();
    WordFilter(vector<string>& w) {
        for(int i = 0; i < w.size(); i++){
            string s = "|" + w[i];
            for(int j = 0; j < w[i].size(); j++){
                insert(w[i].substr(j) + s, i);
            }
        }
    }
    void insert(string a, int p){
        Node* root = node;
        for(char c : a){
            if(root->t.find(c) == root->t.end()){
           root->t[c] = new Node();
            }
            root = root->t[c];
            root->ind = max(root->ind, p);
        }
    }
    int f(string pref, string suff) {
        Node* root = node;
        string s = suff + "|" + pref;
        for(char c : s){
            if(root->t.find(c) == root->t.end()){
                return -1;
            }
           root = root->t[c];
        }
        return root->ind;
    }
};