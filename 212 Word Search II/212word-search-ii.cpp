class Solution {
public:
    class tries{
        public: 
            unordered_map<char, tries*> t;
            bool end = false;
    };
    tries* node = new tries();
    void insert( string s){
        tries* root = node;
        for( char i : s){
            if( root->t[i]==NULL){
                root->t[i]= new tries();
            }
            root = root->t[i];
        }
        root->end = true;
    }
vector<string>ans;
   void fun(int i,int j,vector<vector<char>>& b,string temp,tries* root){
        if(i < 0 || j < 0 || i >= b.size() || j >= b[0].size())
            return;
        if(b[i][j] == '#')
            return;
        char c = b[i][j];
        if(root->t[c] == NULL)
            return;
        root = root->t[c];
        temp.push_back(c);
        if(root->end){
            ans.push_back(temp);
               root->end = false;
        }
        b[i][j] = '#';
        fun(i+1,j,b,temp,root);
        fun(i-1,j,b,temp,root);
        fun(i,j+1,b,temp,root);
        fun(i,j-1,b,temp,root);
        b[i][j] = c;
    }
    vector<string> findWords(vector<vector<char>>& b, vector<string>& w) {
        for( string i : w){
            insert(i);
        }
          tries* root = node;
        string temp;
        for( int i=0;i<b.size();i++){
            for( int j =0;j<b[i].size();j++){
                
                fun( i,j,b,temp, root);
            }
        }
        return ans;
    }
};