class Solution {
public:
    bool isItPossible(string a, string b) {
        map<char, int> m1, m2;
        for(auto& i : a) m1[i]++;
        for(auto& i : b) m2[i]++;
        for(auto& [c1, n1] : m1) {
            for(auto& [c2, n2] : m2) {
                if(m1[c1]==0||m2[c2]==0) continue;
                m1[c1]--;
                m2[c2]--;
                m1[c2]++;
                m2[c1]++;
                int s1=0,s2=0;
                for(auto& [x, cnt] : m1)
                    if(cnt > 0) s1++;
                for(auto& [x, cnt] : m2)
                    if(cnt > 0) s2++;
                if(s1 == s2)
                    return true;
                m1[c2]--;
                m2[c1]--;
                m1[c1]++;
                m2[c2]++;
            }
        }

        return false;
    }
};