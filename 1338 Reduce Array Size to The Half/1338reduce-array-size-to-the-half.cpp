class Solution {
public:
    int minSetSize(vector<int>& a) {
        int n=a.size();
        int M=n;
        vector<pair<int,int>>p;
        map<int,int>m;
        for(auto& i:a){
            m[i]++;
        }
        for(auto& [n,c]:m){
            p.push_back({c,n});
        }
        sort(p.begin(),p.end(),greater<>());
        int cnt = 0;
        for(int i=0;i<p.size();i++){
            if(n<=(M/2)){
                return cnt;
            }
            else{
                n-=(p[i].first);
                cnt++;
            }
           
        }
        return cnt;
    }
};