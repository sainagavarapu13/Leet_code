class Solution {
public:
    int waysToSplitArray(vector<int>& n) {
        long long  sum=0;
        for( int i : n){
            sum+=i;
        }
        int cnt=0;
        long long sec=0;
        for( int i=0;i<n.size()-1;i++){
            sec+=n[i];
            sum-=n[i];
            if( sec>=sum ) cnt++;
        }
        return cnt;
    }
};