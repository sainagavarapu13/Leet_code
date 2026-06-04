struct Node{
    Node* next[27];
    int idx;
    Node(){
        idx=-1;
        for(int i=0;i<27;i++){
            next[i]=NULL;
        }
    }
};
class WordFilter {
public:
    Node* node;
    void insert(Node* node,int ik,string a){
        Node* t=node;
        for(int i=0;i<a.size();i++){
            int ind;
            if(a[i]=='(') ind=26;
            else ind=a[i]-'a';
            if(t->next[ind]==NULL){
                t->next[ind]=new Node();
            }
            t->idx=ik;
            t=t->next[ind];
        }
        t->idx=ik;
    }
    WordFilter(vector<string>& a) {
        
        node = new Node();
        for(int i=0;i<a.size();i++){
            string temp = "("+a[i];
            for(int j=0;j<=a[i].size();j++){
                insert(node,i,a[i].substr(j)+temp);
            }
        }

    }
    
    int f(string pref, string suff) {
        string find=suff+"("+pref;
        Node* t=node;
        for(int i=0;i<find.size();i++){
            int idx;
            if(find[i]=='(') idx=26;
            else idx=find[i]-'a';
            if(t->next[idx]==NULL) return -1;
            t=t->next[idx];
        }
        return t->idx;
    }
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(pref,suff);
 */