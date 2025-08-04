class Solution {
public:
    int percentageLetter(string s, char ch) {
        int i,cnt=0;
        int len=s.size();
        for(i=0;i<len;i++){
            if(s[i]==ch){
                cnt++;
            }
        }
        cout<<cnt;
        int ans=(cnt*100)/len;
        return ans;
    }
};