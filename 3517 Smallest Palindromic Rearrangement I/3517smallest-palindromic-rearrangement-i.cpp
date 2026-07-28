class Solution {
public:
    string smallestPalindrome(string s) {
        map<char,int>m;
        for(auto& i:s){
            m[i]++;
        }
       int n=s.size();
        string ans;
        ans.resize(n);
        int idx=0;
        char ch='*';
        for(auto& [N,c]:m){
            if(c%2==1){
                ch = N;
                break;
            }
        }
        for(auto& [N,c]:m){
            if(c%2==1){
                c--;
            }
               while(c!=0){
                ans[idx]=N;
                ans[n-idx-1]=N;
                idx++;
                c-=2;
            }
        }
        if(ch!='*') {
            ans[n/2] = ch;
        }
        return ans;
    }
};