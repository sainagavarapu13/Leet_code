class Solution {
public:
    string removeTrailingZeros(string a) {
        int e=a.size()-1;
        while(e>=0&&a[e]=='0'){
            e--;
        }
        string ans;
        for(int i=0;i<=e;i++){
            ans+=a[i];
        }
        return ans;
    }
};