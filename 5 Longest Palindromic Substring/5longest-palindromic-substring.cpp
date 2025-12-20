class Solution {
public:
    int check(string &s,int start,int end){
        while(start<=end){
            if(s[start]!=s[end]) return 0;
            start++;
            end--;
        }
        return 1;
    }
    string longestPalindrome(string s) {
        int i,j,m=-1,idx;
        string ans;
        for(i=0;i<s.size();i++){
            for(j=i;j<s.size();j++){
                if(check(s,i,j)){
                    if(j-i+1>m){
                         m=j-i+1;
                         idx=i;
                    }
                   
                }
            }
        }
        i=idx;
        while(m--){
            ans.push_back(s[i]);
            i++;
           
        }
        return ans;
    }
};