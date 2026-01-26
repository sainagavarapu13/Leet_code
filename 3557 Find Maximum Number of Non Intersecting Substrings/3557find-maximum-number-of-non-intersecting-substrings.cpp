class Solution {
public:
    int maxSubstrings(string word) {
        vector<int>a(26,-1);
        int n = word.size();
        int cnt=0;
        for( int i=0;i<n;i++){
            int val = word[i]-'a';
            if( a[val]!=-1 && i-a[val]+1>=4){
                cnt++;
                for( int j=0;j<26;j++){
                    a[j]=-1;
                }
            }
            else{
                if( a[val]==-1){
                    a[val] =i;
                }
            }
        }
        return cnt;
    }
};