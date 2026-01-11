class Solution {
public:
    int residuePrefixes(string s) {
        int cnt = 0;
        set<char>set;
        for(int i=0;i<s.size();i++){
            set.insert(s[i]);
            int dis = set.size();
            if(dis==((i+1)%3)){
                cnt++;
            }
        }
        return cnt;
    }
};