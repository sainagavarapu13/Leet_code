class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
        map<int , int>c;
        vector<int>n;
        for( int i=0;i<a.size();i++){
                c[a[i]]++;
                c[b[i]]++;
                int cnt=0;
            for(auto& [x,y]:c){
                if( y >1) cnt++;
            }
            n.push_back(cnt);
        }
        return n;
    }
};