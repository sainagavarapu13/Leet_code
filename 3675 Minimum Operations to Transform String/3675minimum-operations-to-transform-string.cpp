class Solution {
public:
    int minOperations(string s) {
        vector<int>a;
        int cnt=0;
        for( char c : s){
            if( c=='a') continue;
            int k = 26-(c-'a');
            cnt = max( cnt , k);
        }
        return cnt;
    }
};