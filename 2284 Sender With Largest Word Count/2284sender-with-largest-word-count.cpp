class Solution {
public:
    string largestWordCount(vector<string>& a, vector<string>& b) {
           int i,j,idx;
        int maxx=-1,len;
        string ans;
        map<string,int>m;
        for(i=0;i<a.size();i++){
            len=0;
            for(j=0;j<a[i].size();j++){
                if(a[i][j]==' '){
                    len++;
                }
            }
            m[b[i]]+=len+1;
        }
        for(auto& [n,c]:m){
        if(c>maxx){
            maxx=c;
            ans=n;
       }
       else if(maxx==c){
        if(ans<n){
            ans=n;
        }
       }
        }
        return ans;
    }
};