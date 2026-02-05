class Solution {
public:
    bool fun(int n){
        string bin;
        while(n){
            bin+=(n%2)+'0';
            n/=2;
        }
        for(int i=1;i<bin.size();i++){
            if(bin[i]!=bin[i-1]){
                return 0;
            }
        }
        return 1;
    }
    int countMonobit(int n) {
        int cnt=0;
        for(int i=0;i<=n;i++){
            if(fun(i)){
                cnt++;
            }
        }
        return cnt;
    }
};