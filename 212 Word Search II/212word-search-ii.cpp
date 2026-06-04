struct Node{
    Node* next[26];
    bool end;

    Node(){
        for(int i=0;i<26;i++) next[i]=NULL;
        end=false;
    }
};

class Solution {
public:

    Node* node;
    set<string> ans;

    void insert(Node* node,string s){

        Node* t=node;

        for(int i=0;i<s.size();i++){

            int idx = s[i]-'a';

            if(t->next[idx]==NULL){
                t->next[idx] = new Node();
            }

            t = t->next[idx];
        }

        t->end=true;
    }

    void check(int i,int j,int m,int n,
               string temp,
               vector<vector<char>>& b,
               vector<vector<int>>& vis,
               Node* curr){

        if(i<0 || j<0 || i>=n || j>=m)
            return;

        int idx = b[i][j]-'a';

        if(curr->next[idx]==NULL)
            return;

        curr = curr->next[idx];

        temp += b[i][j];

        if(curr->end){
            ans.insert(temp);
        }

        vis[i][j]=1;

        if(i+1<n && vis[i+1][j]==0){

            check(i+1,j,m,n,temp,b,vis,curr);
        }

        if(i-1>=0 && vis[i-1][j]==0){

            check(i-1,j,m,n,temp,b,vis,curr);
        }

        if(j-1>=0 && vis[i][j-1]==0){

            check(i,j-1,m,n,temp,b,vis,curr);
        }

        if(j+1<m && vis[i][j+1]==0){

            check(i,j+1,m,n,temp,b,vis,curr);
        }

        vis[i][j]=0;
    }

    vector<string> findWords(vector<vector<char>>& board,
                             vector<string>& w) {

        node = new Node();

        for(int i=0;i<w.size();i++){
            insert(node,w[i]);
        }

        int n = board.size();
        int m = board[0].size();

        vector<vector<int>> vis(n,vector<int>(m,0));

        for(int i=0;i<n;i++){

            for(int j=0;j<m;j++){

                check(i,j,m,n,"",board,vis,node);
            }
        }

        vector<string> res;

        for(auto &i:ans){
            res.push_back(i);
        }

        return res;
    }
};