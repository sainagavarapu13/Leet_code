class Encrypter {
public:
    unordered_map<char, string>p;
    unordered_map<string, int>mp;
    Encrypter(vector<char>& keys, vector<string>& values, vector<string>& dictionary) {
        for( int i=0;i<keys.size();i++){
            p[keys[i]]=values[i];
        }
        for( string s : dictionary){
            string temp;
            bool k=true;
            for( char c : s){
                if( p.find(c)==p.end()){
                    k = false;
                    break;
                }
                temp+=p[c];
            }
            if(k){
                mp[temp]++;
            }
        }
    }
    
    string encrypt(string word1) {
        string s ;
        for( char c : word1){
            if( p.find(c)==p.end()) return "";
            s+=p[c];
        }
        return s;
    }
    
    int decrypt(string word2) {
        return mp[word2];
    }
};

/**
 * Your Encrypter object will be instantiated and called as such:
 * Encrypter* obj = new Encrypter(keys, values, dictionary);
 * string param_1 = obj->encrypt(word1);
 * int param_2 = obj->decrypt(word2);
 */