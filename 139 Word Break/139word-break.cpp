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
    Node *node ;
     vector<int>dp;
    void insert(Node* node,string a){
        Node* t=node;
        for(int i=0;i<a.size();i++){
            int idx=a[i]-'a';
            if(t->next[idx]==NULL){
                t->next[idx]=new Node();
            }
            t=t->next[idx];
        }
        t->end=true;
    }
    bool search(Node* node , string a){
        Node* t=node;
        for(int i=0;i<a.size();i++){
            int idx=a[i]-'a';
            if(t->next[idx]==NULL) return false;
            t=t->next[idx];
        }
        return t->end==true;
    }
    bool check(int start, int end,string s){
        if(start==s.size()){
            return true;
        }
        if(end>s.size()) return false;
        if(dp[start]!=-1) return dp[start];
        string t(s.begin()+start,s.begin()+end);
        if(search(node,t)){
          if(check(end,end,s)){
             return true;}
        }
        return dp[start] = check(start,end+1,s);
    }
    bool wordBreak(string s, vector<string>& a) {
        dp.clear();
        node = new Node();
        for(int i=0;i<a.size();i++){
            insert(node,a[i]);
        }
        int start=0,i=0;
        int n=s.size();
       dp.resize(n,-1);
      return check(0,0,s);
      
    }
};