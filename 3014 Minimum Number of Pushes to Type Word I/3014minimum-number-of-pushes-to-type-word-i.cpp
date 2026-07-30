class Solution {
public:
    int minimumPushes(string w) {
        vector<int>f(26,0);
        for( auto& i: w){
            f[i-'a']++;
        }
        int push =0;
        sort( f.rbegin(),f.rend());
        for( int i = 0;i < 26;i++){
            if( f[i]==0) break;
            int pos = (i/8)+1;
            push+= pos * f[i];
        }
        return push;
    }
};