class Solution {
public:
    class trie{
        public:
        trie* c[2];
        trie(){
        c[0]=nullptr;
        c[1]= nullptr;}
    };
    trie* node = new trie();
    void insert( int ele){
        trie* root = node;
        for( int b = 30 ;b>=0;b--){
            int val = (ele>>b)&1;
            if(root->c[val]==nullptr){
                root->c[val] = new trie();
            }
            root = root->c[val];
        }
    }
    int solve(int num){
         trie* root = node;
         int mul =0;
         for( int b=30;b>=0;b--){
            int val = (num>>b)&1;
            int op = 1-val;
            if( root->c[op]!=nullptr){
                mul|=(1<<b);
                root = root->c[op];
            }else{
                root = root->c[val];
            }
         }
         return mul;
    }
    int findMaximumXOR(vector<int>& a) {
        int ans = INT_MIN;
        for( int i : a){
            insert(i);
        }
         for( int i : a){
           ans = max( ans,solve(i) );
        }
        return ans;
    }
};