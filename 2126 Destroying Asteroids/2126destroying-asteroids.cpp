class Solution {
public:
    bool asteroidsDestroyed(int k, vector<int>& a) {
        long long l=(long long)k;
        sort(a.begin(),a.end());
        for(int i=0;i<a.size();i++){
            if(a[i]>l){
                return false;
            }
           l+=(long long)a[i];
        }
        return true;
    }
};