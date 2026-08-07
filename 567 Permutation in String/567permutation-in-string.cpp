class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int start=0,end=0;
        map<char,int>m,m1;
        for(auto& i:s1) m[i]++;
        while(end<s2.size()){
            m1[s2[end]]++;
            while(m[s2[end]]<m1[s2[end]]){
                m1[s2[start]]--;
                start++;
            }
            if(m==m1) return true;
            end++;
        }
        return m==m1;
    }
};