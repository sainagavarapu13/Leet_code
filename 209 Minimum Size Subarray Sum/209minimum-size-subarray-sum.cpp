class Solution {
public:
    int minSubArrayLen(int t, vector<int>& n) {
        int s=0;
        int e=0;
        int sum=0,mins =INT_MAX;
        while( e<n.size() ){
            sum+=n[e];
          while(s<=e && sum >= t){
                mins = min( mins , e-s+1);
                sum-=n[s];
                s++;
            }
            e++;
        }
       if( mins != INT_MAX) return mins;
       else return 0;
    }
};