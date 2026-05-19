class Solution {
public:
    bool isvol(char ch){
        char k=tolower(ch);
        if(k=='a'||k=='e'||k=='i'||k=='o'||k=='u') return true;
        return false;
    }
    int maxVowels(string s, int k) {
        int start=0,end=k;
        int cnt=0;
        for(int i=start;i<end;i++){
            if(isvol(s[i])){
                cnt++;
            }
        }
        int ans=0;
        ans=max(ans,cnt);
        while(end<s.size()){
           
            if(isvol(s[end])){
                cnt++;
            }
            if(isvol(s[start])){
                cnt--;
            }
             start++;
            ans=max(ans,cnt);
             end++;
        }
        return ans;
    }
};