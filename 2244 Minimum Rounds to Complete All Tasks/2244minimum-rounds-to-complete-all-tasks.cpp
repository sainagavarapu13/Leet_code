class Solution {
public:
    int minimumRounds(vector<int>& a) {
         map<int,int>m;
        for(auto& i:a){
            m[i]++;
        }
        int cnt=0;
        for(auto& [n,c]:m){
            if(c==1) return -1;
            while(c-3 >= 2){
                c-=3;
                cnt++;
            }
            while(c-2 >=0){
                c-=2;
                cnt++;
            }
        }
        return cnt;
    }
};