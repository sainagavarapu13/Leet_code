class Solution {
public:
    vector<int> maxSubsequence(vector<int>& a, int k) {
        vector<pair<int,int>>p;
        for(int i=0;i<a.size();i++){
            p.push_back({a[i],i});
        }
        sort(p.begin(),p.end(),[](auto& x,auto& y){
            return x.first>y.first;

        });
        sort(p.begin(),p.begin()+k,[](auto& x,auto& y){
            return x.second<y.second;
            
        });
        vector<int>arr;
       for(auto& i:p){
        if(k){
        arr.push_back(i.first);
        k--;
        }
    
       }
    return arr;
    }
};