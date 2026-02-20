class Solution {
public:
    int minNumberOfFrogs(string s) {
        map<char,int>m;
        int now = 0;
        int maxi=-1;
        for(auto& i:s){
            m[i]++;
            if(m['c'] < m['r'] || m['r'] < m['o'] || m['o'] < m['a'] || m['a'] < m['k'])
                return -1;
            if(i=='c') now++;
            if(i=='k'){
                now--;
                m['c']--;
                m['r']--;
                m['o']--;
                m['a']--;
                m['k']--;
            }
            maxi=max(maxi,now);
        }
        if(now >= 1) return -1;
        return maxi;
    }
};