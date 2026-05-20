class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>r;
        map<char , int> m;
        for( int i=0;i<s.size();i++){
            m[s[i]]=i;
        }
        int p = 0 , q=0;
        for( int i =0;i<s.size();i++){
            q = max( q, m[s[i]]);
            if( i == q){
                r.push_back(q-p+1);
                p = i+1;
            }
        }
        return r;
    }
};