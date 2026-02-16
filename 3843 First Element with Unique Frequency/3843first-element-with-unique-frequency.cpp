class Solution {
public:
    int firstUniqueFreq(vector<int>& a) {
        unordered_map<int,int>m1,m2;
        for(auto& i:a) m1[i]++;
        for(auto& [n,c]:m1){
            m2[c]++;
        }
        for(int i=0;i<a.size();i++){
            if(m2[m1[a[i]]]==1) return a[i];
        }
        return -1;
    }
};