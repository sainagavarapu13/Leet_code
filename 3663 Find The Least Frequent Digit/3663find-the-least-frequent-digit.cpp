class Solution {
public:
    int getLeastFrequentDigit(int n) {
       vector<int>a;
        while(n){
            a.push_back(n%10);
            n=n/10;
        }
        map<int,int>m;
        for(auto& i: a) m[i]++;
        int mini=INT_MAX;
        int ans;
        for(auto& [n,c]:m){
            if(c<mini) {
                mini=c;
                ans=n;
            }
        }
        return ans;
    }
};