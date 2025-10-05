class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int> m;
        string t = "";
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        for(int j=0;j<order.size();j++){
            if(m[order[j]]==0){
                m[order[j]] = 0;
                continue;
            }
            else{
                for(int i=0;i<m[order[j]];i++){
                    t.push_back(order[j]);
                }
                m[order[j]]=0;
            }
        }
        for(char ch='a';ch<='z';ch++){
            if(m[ch]!=0){
                for(int i=0;i<m[ch];i++){
                    t.push_back(ch);
                }
            }
            else{
                continue;
            }
        }
        return t;
    }
};