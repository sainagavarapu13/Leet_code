class Solution {
public:
    vector<int> countTasks(vector<int>& t, vector<int>& s) {
        vector<long long>p(t.size(),0);
        p[0]=t[0];
        for( int i=1;i<t.size();i++){
            p[i]= p[i-1]+t[i];
        }
        vector<int>a;
        long long m = p.back(), d=0;
        for( int i=0;i<s.size();i++){
            d+=s[i];
            if( d>=m){
                a.push_back(0);
                d=0;
                continue;
        }
        auto it = upper_bound(p.begin(), p.end(), d);
        int ind = it-p.begin()-1;
        a.push_back(t.size()-ind-1);
        }
        
        return a;
    }
};