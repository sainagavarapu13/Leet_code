class Solution {
public:
    int minDeletion(string s, int k) {
        map<char , int>a;
        for(auto& c : s) a[c]++;
        vector<pair<char , int>>b(a.begin(), a.end());
        sort( b.begin(), b.end(),[](auto& x , auto& y){
            return x.second>y.second;
        });
        int cnt=0;
        for( int i =k;i<b.size();i++){
            cnt+= b[i].second;
        }
        return cnt;
    }
};