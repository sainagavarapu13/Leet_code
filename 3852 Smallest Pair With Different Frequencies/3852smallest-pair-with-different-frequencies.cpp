class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& a) {
        map<int,int>m;
        for(auto& i:a){
            m[i]++;
        }
        sort(a.begin(),a.end());
        int n=-1,m1=-1;
        int freq=m[a[0]];
        n=a[0];
        for(int i=1;i<a.size();i++){
            if(a[i]==n) continue;
            if(freq==m[a[i]]) continue;
            m1=a[i];
            break;
            
        }
        if(m1==-1) return {-1,-1};
        return {n,m1};
    }
};