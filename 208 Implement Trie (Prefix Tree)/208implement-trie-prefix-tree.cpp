struct Node{
    Node* ch[26];
    bool end;
 Node(){
     end=false;
     for(int i = 0; i < 26; i++)
     ch[i] = NULL;
   }
};
class Trie {
public:
    Node* a;
    Trie() {
        a = new Node();
    }
    
    void insert(string word) {
        Node* node = a;
        for(int i=0;i<word.size();i++){
            
            if(node->ch[word[i]-'a']==NULL){
                node->ch[word[i]-'a'] = new Node();
            }
            node =node->ch[word[i]-'a'];
        }
        node->end = true;
    }
    
    bool search(string word) {
        Node* temp = a;
        for(int i=0;i<word.size();i++){
            int idx = word[i]-'a';
            if(temp->ch[idx]==NULL) return false;
            temp = temp->ch[idx];
        }
        if(temp->end==false) return false;
        return true;
    }
    
    bool startsWith(string word) {
        Node* temp = a;
        for(int i=0;i<word.size();i++){
            int idx = word[i]-'a';
            if(temp->ch[idx]==NULL) return false;
            temp = temp->ch[idx];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */