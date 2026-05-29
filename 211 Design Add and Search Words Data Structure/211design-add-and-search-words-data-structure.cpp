struct Node{
    Node* next[26];
    bool end;
    Node(){
        for(int i=0;i<26;i++){
            next[i]=NULL;
        }
        end=false;
    }
};

class WordDictionary {
public:
    Node* a = new Node();

    void insert(string s,Node* a){
        Node* temp=a;
        for(int i=0;i<s.size();i++){
            int idx=s[i]-'a';
            if(temp->next[idx]==NULL){
                temp->next[idx]=new Node();
            }
            temp=temp->next[idx];
        }
        temp->end=true;
    }
    bool dfs(string word,int idx,Node* a){
        if(!a) return false;
        if(idx==word.size()) return a->end;
        if(word[idx]=='.'){
            for(int i=0;i<26;i++){
               if(a->next[i]&&dfs(word,idx+1,a->next[i])){
                return true;
               }
            }
            return false;
        }
       return dfs(word,idx+1,a->next[word[idx]-'a']);
    }
    WordDictionary() {
        
    }
    
    void addWord(string word) {
        insert(word,a);
    }
    
    bool search(string word) {
     return dfs(word,0,a);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */