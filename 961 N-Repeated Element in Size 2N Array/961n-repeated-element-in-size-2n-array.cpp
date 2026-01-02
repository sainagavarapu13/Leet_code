class Solution {
public:
    int repeatedNTimes(vector<int>& a) {
        int n = a.size()/2;
        map<int,int>m;
        for(auto& i:a){
            m[i]++;
        }
        for(auto& [N,c]:m){
            if(c==n){
                return N;
            }
        }
        return -1;
    }
};