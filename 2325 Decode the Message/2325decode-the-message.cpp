class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char> m;
        int a=0;
       for (char c : key) {
            if (c == ' ') continue;
            if (m.find(c) == m.end()) {
                m[c] = 'a' + a;
                a++;
            }
        }
        string s;
        for(int i=0;i<message.length();i++){
            if(message[i]==' ') {
                s+=' ';
                continue;
            }
            int b = message[i];
            s += m[b];
        }
        return s;
    }
};