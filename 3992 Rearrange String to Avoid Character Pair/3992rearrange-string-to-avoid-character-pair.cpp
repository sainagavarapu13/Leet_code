class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        map<char,int>m;
        for(auto& i:s){
            m[i]++;
        }
        string ans;
       while(m[y]>0){
           m[y]--;
           ans+=y;
       }
        if(m[x]>0){
            m[x]--;
            ans+=x;
        }
        for(auto& i:s){
            if(m[i]>0){
                m[i]--;
                ans+=i;
            }
        }
        return ans;
    }
};