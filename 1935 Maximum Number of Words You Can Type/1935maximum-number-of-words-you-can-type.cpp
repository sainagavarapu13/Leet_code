class Solution {
public:
    int canBeTypedWords(string t, string b) {
        unordered_set<char> br(b.begin(),b.end());
        stringstream ss(t);
        string word;
        int count  =0;
        while(ss>>word){
            bool c = true;
            for(char ca: word){
                if(br.count(ca)){
                    c = false;
                    break;
                }
            }
            if(c) count++;
        }
        return count;
    }
};