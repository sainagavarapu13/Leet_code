class Solution {
public:
    int strStr(string a, string b) {
        int idx=0;
        string ans;
        int k=-1;
        if(a.size()<b.size()) return -1;
        for(int i=0;i<a.size()-b.size()+1;i++){
            ans=a.substr(i,b.size());
            if(ans==b){ 
           k=i;
            break;
            }

        }
        return k;
    }
};