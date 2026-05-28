class WordDictionary {
public:
unordered_map<char, WordDictionary*>t;
    bool end = false;
    WordDictionary() {
        
    }
    
    void addWord(string word) {
        WordDictionary *root = this;
        char temp;
        for( char i : word){
            temp=i;
            if( root->t[temp]==NULL){
                root->t[temp] = new WordDictionary();
            }
             root = root->t[temp];

        }
        root->end = true;
    }

    bool searchEngin(int i , string word , WordDictionary *root){
        if(root==NULL) return 0;
        if( i == word.size()) return root->end;
        if( word[i]=='.'){
            for( auto c : root->t){
                    if(searchEngin(i+1, word, c.second)){
                        return 1;
                    }
            }
        }
        if( root->t[word[i]]==NULL) return 0;
       return searchEngin(i+1, word, root->t[word[i]]);
       
        
    }
    bool search(string word) {
        WordDictionary *root = this;
        return searchEngin(0,word, root);
        // string temp = "";
        // for( char i : word){
        //     if( i == '.') { return 1;

        //         //continue;
        //         }
        //     temp+=i;
        //     if( root->t[temp]==NULL){
        //        // root->t[temp] = new WordDictionary();
        //        return 0;
        //     }
        //      root = root->t[temp];

        // }
        // return root->end;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */