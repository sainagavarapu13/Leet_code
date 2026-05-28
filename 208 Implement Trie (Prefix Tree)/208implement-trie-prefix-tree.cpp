class Trie {
public:
    unordered_map<string , Trie*>t;
    bool end= false;
   
    Trie() {
       
    }
    void insert(string word) {
        Trie* root = this;
        string temp = "";
        for( char i : word){
            temp+=i;
            if(root->t[temp]==NULL) {
                root->t[temp] = new Trie();

            }
            root =  root->t[temp];

        }
        root->end=true;
    }
    
    bool search(string word) {
         Trie* root = this;
        string temp = "";
        for( char i : word){
            temp+=i;
            if( root->t[temp]==NULL) return 0;
            root = root->t[temp];
        }
        return root->end;
    }
    
    bool startsWith(string word) {
         Trie* root = this;
        string temp = "";
        for( char i : word){
            temp+=i;
            if( root->t[temp]==NULL) return 0;
            root = root->t[temp];
        }
        return 1;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */