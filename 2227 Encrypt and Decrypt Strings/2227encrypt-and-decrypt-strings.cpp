class Encrypter {
public:
    vector<char> k;
     vector<string>v;
      set<string> d;
    map<char,string>m;
    map<string ,int>cnt;
    Encrypter(vector<char>& keys, vector<string>& values, vector<string>& dictionary) {
        k=keys;
        v=values;
        for(auto& i:dictionary) d.insert(i);
        for(int i=0;i<k.size();i++){
            m[k[i]] = v[i];
        }
        for(auto& i:dictionary){
            string temp = encrypt(i);
            cnt[temp]++;
        }
    }
    
    string encrypt(string word1) {
        string ans="";
        for(int i=0;i<word1.size();i++){
           if(m.find(word1[i])==m.end()) return "";
           ans+=m[word1[i]];
        }
        return ans;
    }
    
    int decrypt(string word2) {
        return cnt[word2];
    }
};

/**
 * Your Encrypter object will be instantiated and called as such:
 * Encrypter* obj = new Encrypter(keys, values, dictionary);
 * string param_1 = obj->encrypt(word1);
 * int param_2 = obj->decrypt(word2);
 */