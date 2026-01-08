class Solution {
public:
    int garbageCollection(vector<string>& a, vector<int>& b) {
        map<char,int>m;
        map<char,int>last;
        int sum = 0;
        for(int i=0;i<b.size();i++){
            sum+=b[i];
            b[i]=sum;
        }

        for(int i=0;i<a.size();i++){
            for(int j=0;j<a[i].size();j++){
                m[a[i][j]]++;
                last[a[i][j]] = i;
            }
        }
        int cnt = 0;
        for(auto& [n,c]:m){
            cnt+=c;
            int idx = last[n];
         if(idx!=0)   cnt+=b[idx-1];
        }
        return cnt;
    }
};