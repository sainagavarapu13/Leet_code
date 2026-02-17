class Solution {
public:
    int maxScore(vector<int>& a) {
        vector<int>n;
        long long sum=0;
        int cnt=0;
        int z=0;
        for( int i:a){
            if( i>0) {
            sum+=i;
            if( sum >0) cnt++;
            }else{
                n.push_back(i);
            }
        }
        sort(n.begin(),n.end(),greater<int>());
        for( int i : n){
           sum+=i;
           if( sum < 0) break;
          if( sum >0) cnt++;
        }
        return cnt;
    }
};