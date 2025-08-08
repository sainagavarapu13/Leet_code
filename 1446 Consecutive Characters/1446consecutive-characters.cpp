class Solution {
public:
    int maxPower(string s) {
        int cnt=1,maxx=1;
        for(int i=0;i<s.size();i++){
            if(s[i]==s[i+1]){
                cnt++;
                maxx=max(maxx,cnt);
            }
            else{
                cnt=1;
            }
            
        }
        return maxx;
    }
};