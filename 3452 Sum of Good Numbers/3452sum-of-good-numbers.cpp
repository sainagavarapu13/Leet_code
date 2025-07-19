class Solution {
public:
    int sumOfGoodNumbers(vector<int>& n, int k) {
        int sum=0;
        for( int i=0;i<n.size();i++){
            int f=1;
            if(i-k >=0 && n[i]<=n[i-k]) f=0;
            if( i+k <n.size() && n[i]<=n[i+k]) f=0;
            if(f==1) sum+=n[i];
        }
        return sum;
    }
};