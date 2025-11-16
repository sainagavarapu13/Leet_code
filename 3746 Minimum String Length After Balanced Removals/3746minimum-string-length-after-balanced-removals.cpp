class Solution {
public:
    int minLengthAfterRemovals(string s) {
        map<char,int>m;
        for(auto& i:s){
            m[i]++;
        }
        int k=m['a'];
        int l=m['b'];
        return abs(k-l);
    }
};