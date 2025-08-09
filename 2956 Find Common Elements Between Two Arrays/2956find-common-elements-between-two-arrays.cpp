class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& a, vector<int>& b) {
        vector<int>res;
        int cnt =0;
        for( int i=0;i<a.size();i++){
            if( find(b.begin(), b.end(),a[i])!= b.end()) cnt++;
        }
        res.push_back(cnt);
        cnt=0;
        for( int i=0;i<b.size();i++){
            if( find(a.begin(), a.end(),b[i])!= a.end()) cnt++;
        }
        res.push_back(cnt);
        return res;
    }
};