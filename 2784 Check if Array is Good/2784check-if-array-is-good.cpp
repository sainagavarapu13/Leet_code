class Solution {
public:
    bool isGood(vector<int>& a) {
        int maxi = *max_element(a.begin(),a.end());
        map<int,int>m;
        for(int i=1;i<=maxi;i++){
            m[i]=0;
        }
        for(auto& i:a){
            m[i]++;
        }

        for(auto& [n,c]:m){
            if(n!=maxi&&c!=1) return false;
            if(n==maxi&&c!=2) return false;
        }
        return true;
    }
};