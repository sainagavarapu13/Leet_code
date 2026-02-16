class Solution {
public:
    int numRabbits(vector<int>& a) {
        map<int,int>m;
        for(auto& i:a){
            m[i]++;
        }
        int ans=0,cnt=0;
        for(auto& [n,c]:m){
            while(c!=0){
                cnt+=n+1;
                c = c-(min(n+1,c));
            }
        }
        return cnt;
    }
};