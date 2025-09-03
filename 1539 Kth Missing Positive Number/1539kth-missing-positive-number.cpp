class Solution {
public:
    int findKthPositive(vector<int>& a, int k) {
        int cnt=0;
        vector<int>b;
        for( int i=1;i<=a[a.size()-1];i++){
            if( find(a.begin(), a.end(),i)==a.end()){
                b.push_back(i);
                cnt++;
                if( cnt ==k) return b.back();
            }
        }
        for( int i=a[a.size()-1]+1;i<=10000;i++){
            b.push_back(i);
                cnt++;
                if( cnt ==k) return b.back();
        }
        return 0;
    }
};