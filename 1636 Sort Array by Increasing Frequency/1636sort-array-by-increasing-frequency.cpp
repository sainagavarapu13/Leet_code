class Solution {
public:
    vector<int> frequencySort(vector<int>& a) {
        map<int ,int>m;
        for(auto& i:a){
            m[i]++;
        }
        vector<pair<int,int>>p(m.begin(),m.end());
        sort(p.begin(),p.end(),[](auto& x,auto& y){
            if(x.second==y.second){
                return x.first>y.first;
            }
            else{
                return x.second<y.second;
            }
        });
        vector<int>ans;
        for(auto& i:p){
            int k=i.second;
            while(k--)
                ans.push_back(i.first);
        }
        return ans;
    }
};