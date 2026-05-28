class Solution {
public:
    class tries{
        public:
            unordered_map<char, tries*>t;
            int cnt=0;
    };
    tries* node = new tries();
    void insert(string w){
        tries* root = node;
        for( char i : w){
            if( root->t[i]==NULL){
                root->t[i] = new tries();
            }
            root = root->t[i];
             root->cnt++;
        }
      
    }
    int search(string s){
        int ans =0;
          tries* root = node;
        for( char i : s){
            if( root->t[i]==NULL) return ans;
            root = root->t[i];
            ans+=(root->cnt);
           // k++;
        }
        return ans;
    }
    vector<int> sumPrefixScores(vector<string>& w) {
        for( string i : w){
            insert(i);
        }
        vector<int>a;
        for( string i : w){
            a.push_back(search(i));
        }
        return a;
    }
};