class Solution {
public:
    int numberOfBeams(vector<string>& a) {
        vector<int>ans;
        if(a.size()==1&&a[0].size()==1){
            return 0;
        }
       int cnt=0,i,j;
       for(i=0;i<a.size();i++){
        cnt=0;
        for(j=0;a[i][j]!='\0';j++){
            if(a[i][j]=='1') cnt++;
        }
        if(cnt!=0) ans.push_back(cnt);
       }
       if(ans.size()==0) return 0;
       cnt=0;
       for(i=0;i<ans.size()-1;i++){
        cnt+=ans[i]*ans[i+1];
       }
       return cnt;
    }
};