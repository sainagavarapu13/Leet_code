class Solution {
public:
    int findJudge(int n, vector<vector<int>>& a) {
        vector<int>mem;
        int i;
        for(i=0;i<a.size();i++){
            mem.push_back(a[i][0]);
        }
        int temp,cnt=0;
        for(i=1;i<=n;i++){
            if(count(mem.begin(),mem.end(),i)==0){
                cnt++;
               if(cnt==2) return -1;
               temp=i;
            }
        }
        cnt=0;
        for(i=0;i<a.size();i++){
            if(a[i][1]==temp) cnt++;
        }
        if(cnt==n-1) return temp;
        else return -1;
    }
};