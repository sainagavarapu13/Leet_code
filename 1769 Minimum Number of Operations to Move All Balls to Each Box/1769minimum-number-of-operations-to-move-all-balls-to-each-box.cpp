class Solution {
public:
    vector<int> minOperations(string s) {
        
        vector<int>c;
       for( int i=0;i<s.size();i++){
        if( s[i]=='1'){
            c.push_back(i);}
       }
       vector<int>a;
       for( int i=0;i<s.size();i++){
        int cnt=0;
        for( auto& j:c) cnt+=abs(i-j);
        a.push_back(cnt);
       }
        return a;
    }
};