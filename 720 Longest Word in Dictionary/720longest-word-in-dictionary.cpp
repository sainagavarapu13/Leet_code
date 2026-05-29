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
class Solution {
public:
 Node* a = new Node();
    void insert(string s,Node* a){
        Node* temp=a;
        int cnt=0;
        for(int i=0;i<s.size();i++){
            int idx=s[i]-'a';
            if(temp->next[idx]==NULL){
                
                temp->next[idx]=new Node();
            }
            temp=temp->next[idx];
        }
        temp->end=true;
       
    }
    bool check(string st,Node* node){
        for(int i=0;i<st.size();i++){
            if(node->next[st[i]-'a']->end==false){
                return false;
            }
            node=node->next[st[i]-'a'];
        }
        return true;
    }
    string longestWord(vector<string>& a) {
        Node* node = new Node();
        sort(a.begin(),a.end());
        int prev=0;
        string ans="";
        for(int i=0;i<a.size();i++){
          insert(a[i],node);
        }
        for(int i=0;i<a.size();i++){
           if( check(a[i],node)){
            if(ans.empty()||(ans.size()<a[i].size())){
                ans=a[i];
            }
           }
    }
        return ans;
    }
};