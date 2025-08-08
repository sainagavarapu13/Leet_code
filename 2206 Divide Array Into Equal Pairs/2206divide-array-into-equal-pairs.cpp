class Solution {
public:
    bool divideArray(vector<int>& n) {
        map<int,int>m;
        for(auto& i:n){
            m[i]++;
        }
        for(auto& [n,c]:m){
            if(c%2!=0) return false;
        }
        return true;
    }
};