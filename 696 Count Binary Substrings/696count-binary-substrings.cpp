class Solution {
public:
    int countBinarySubstrings(string s) {
        int cu = 1,pre = 0,cnt = 0;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]) cu++;
            else{
                cnt +=min(pre,cu);
                pre=cu;
                cu = 1;
            }
        }
        return cnt + min(pre,cu);
    }
};