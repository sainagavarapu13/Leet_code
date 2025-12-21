class Solution {
public:
    vector<int> findXSum(vector<int>& a, int k, int x) {
        int i,j;
        int sum=0;
        vector<int>ans;
        for(i=0;i+k<=a.size();i++){
            map<int,int>m;
            vector<pair<int,int>>p;
            sum=0;
            for(j=i;j<i+k;j++){
                m[a[j]]++;
            }
                for(auto& [n,c]:m){
                    p.push_back({c,n});
                }
                sort(p.begin(),p.end(),[](auto& x,auto& y){
                    if(x.first==y.first){
                        return x.second>y.second;
                    }
                    else return x.first>y.first;
                });
                int t=min((int)p.size(),x);
                for(int l=0;l<t;l++){
                    sum+=(p[l].first*p[l].second);
                }
            
            ans.push_back(sum);
        }
        return ans;
    }
};