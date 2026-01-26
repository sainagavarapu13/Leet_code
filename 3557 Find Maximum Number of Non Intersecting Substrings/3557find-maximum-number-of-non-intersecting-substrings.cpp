class Solution {
public:
    int maxSubstrings(string word) {
        int n =word.length();
        vector<int>a(26,-1);
        int cnt = 0;
        for(int i=0;i<n;i++){
            int val = word[i]-'a';
            if(a[val]!=-1 && i-a[val]+1>=4){
                cnt++;
                fill(a.begin(),a.end(),-1);
            }
            else{
                if(a[val]==-1){
                    a[val] = i;
                }
            }
        }
        return cnt;
    }
};