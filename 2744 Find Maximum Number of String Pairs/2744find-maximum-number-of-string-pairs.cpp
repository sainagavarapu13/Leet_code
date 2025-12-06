class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        map<string,int> m;
        for(int i=0;i<words.size();i++){
            m[words[i]]++;
        }
        int a = 0;
        for(int j=0;j<words.size();j++){
            string s = words[j];
            string p = words[j];
            reverse(s.begin(),s.end());
            if(m[s]==0 || m[p]==0) continue;
            if(s==p){
            if(s[0]==s[1] && m[s]==2){
                    a++;
                    m[s] = m[s]-2;
            }
            }
            else{
                a++;
                m[s]--;
                m[p]--;
            }
        }
        return a;
    }
};