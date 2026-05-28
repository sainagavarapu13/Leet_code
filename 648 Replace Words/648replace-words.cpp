class Solution {
public:
struct Node{
    Node* next[26];
    bool end;
    Node(){
        end=false;
        for(int i=0;i<26;i++){
            next[i]=NULL;
        }
    }
};
void insert(Node* trie , string t){
    Node* temp = trie;
    for(int i=0;i<t.size();i++){
        int idx=t[i]-'a';
        if(temp->next[idx]==NULL){
            temp->next[idx] = new Node();
        }
        temp=temp->next[idx];
    }
    temp->end=true;
}
string findroot(Node* trie,string s){
      Node* temp = trie;

        string ans;

    for(int i=0;i<s.size();i++){
        int idx=s[i]-'a';
        if(temp->next[idx]==NULL){
            return s;
        }
        ans+=s[i];
        temp=temp->next[s[i]-'a'];
        if(temp->end){
        return ans;
    }
    }
    return s;
}
    string replaceWords(vector<string>& a, string b) {
        Node* trie =new Node();
        for(int i=0;i<a.size();i++){
            insert(trie,a[i]);
        }
        string ans,i;
       stringstream ss(b);
       while(ss>>i){
       ans+= findroot(trie,i);
       ans+=' ';
       }
       ans.pop_back();
       return ans;
    }
};