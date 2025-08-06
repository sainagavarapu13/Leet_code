class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& a, int k) {
        map<int,int>m;
        for(int i=0;i<a.size();i++){
            if(m.count(a[i])){
                if(abs(i-m[a[i]])<=k) return 1;
            }
            m[a[i]]=i;
        }
        return 0;
    }
};