class Solution {
public:
    class TrieNode{
        public:
        unordered_map<string, TrieNode*>t;
        bool end = false;
    };
    vector<string>ans;
    void insert( TrieNode* node , string s){
        TrieNode* root = node;
        string present = "";
        for( char i :s){
            if(i =='/'){
               if(root->end) return ;
               if( root->t[present]==NULL){
                root->t[present]= new TrieNode;
               }
                root = root->t[present];
                present = "";

            }else{
                present+= i;
            }
        }
        //last node
        if(root->end) return ;
        if( root->t[present]==NULL){
                root->t[present]= new TrieNode;
               }
         root = root->t[present];
         root->end = true;
        ans.push_back(s);

    }
    vector<string> removeSubfolders(vector<string>& a) {
        sort(a.begin(), a.end());
        TrieNode* root = new TrieNode();
        for( string s : a ){
            insert(root , s);
        }

        return ans;
    }
};