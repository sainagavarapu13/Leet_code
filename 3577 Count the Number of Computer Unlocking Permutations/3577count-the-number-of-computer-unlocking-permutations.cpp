class Solution {
public:
     int countPermutations(vector<int>& complexity) {
        int mod = 1000000007;
        int a = complexity[0],c = 1;
        long long b=0,d = 1;
        for(int i=1;i<complexity.size();i++){
            if(complexity[i]>a){
                b++;
                if(b==1) continue;
                d = (d * b)%mod;
            }
            else if(complexity[i]<=a){
                return 0;
            }
            c = d;
        }
        return c;
    }
};