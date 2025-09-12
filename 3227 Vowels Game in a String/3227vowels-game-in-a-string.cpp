class Solution {
public:
    int isvol(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') return 1;
        else return 0;
    }
    bool doesAliceWin(string s) {
        int len=s.size();
        int sum=0,i;
        vector<int>ans(len,0);
        for(i=0;i<s.size();i++){
            if(isvol(s[i])){
             ans[i]=1;
            sum++;
            }
        }
        if(sum==0) return 0;
        for(i=ans.size()-1;i>=0;i--){
            if(sum%2!=0) return 1;
            sum--;
        }
        return 0;
    }
};