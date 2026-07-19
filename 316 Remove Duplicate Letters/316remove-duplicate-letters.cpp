class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> l(26),v(26,0);
        string st;
        for(int i = 0;i<s.size();i++){
            l[s[i]-'a'] = i;
        }
        for(int i=0;i<s.size();i++){
            char ch = s[i];
            if(v[ch-'a']) continue;
            while(!st.empty() && st.back()>ch && l[st.back()-'a']>i){
                v[st.back()-'a'] = false;
                st.pop_back();
            }
            st.push_back(ch);
            v[st.back()-'a'] = true;
        }
        return st;
    }
};