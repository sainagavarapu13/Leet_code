class Solution {
public:
    string smallestSubsequence(string s) {
       string st;
        vector<int>last(26,-1);
        for(int i=0;i<s.size();i++){
            last[s[i]-'a'] = i;
        }
        vector<bool>vis(26,false);
        for(int i=0;i<s.size();i++){
            if(vis[s[i]-'a']) continue;
           if(st.empty()){
            st+=s[i];
            vis[s[i]-'a'] = 1;
           }
           else if(st.back()<s[i]){
            st+=s[i];
            vis[s[i]-'a'] =1;

           }
           else {
            while(!st.empty()&&st.back()>s[i]&&last[st.back()-'a']>i){
                vis[st.back()-'a'] = 0;
                st.pop_back();
            }
             st+=s[i];
                vis[s[i]-'a'] = 1;
            
           
           }
        }
        return st;
    }
};