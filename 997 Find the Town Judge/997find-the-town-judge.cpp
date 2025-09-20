class Solution {
public:
    int findJudge(int n, vector<vector<int>>& t) {
        vector<int>a;
        vector<int>b;
        for( auto& i : t){
            a.push_back(i[0]);
            b.push_back(i[1]);
        }
        int cnt=0,ind;
        for( int i=1;i<=n;i++){
            if( find( a.begin(),a.end(),i)==a.end()){
                ind = i;
                cnt++;
            }
        }
        if( cnt >1) return -1;
        cnt=0;
        for( int i:b){
            if( i==ind) cnt++;
        }
        if( cnt == n-1) return ind;
        else return -1;
        
    }
};