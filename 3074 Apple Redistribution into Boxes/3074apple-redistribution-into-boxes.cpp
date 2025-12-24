class Solution {
public:
    int minimumBoxes(vector<int>& a, vector<int>& c) {
        int sum =0;
        sort(c.begin(),c.end(),greater<>());
        for( int i : a){
            sum+=i;
        }
        int cnt=0;
        for(int i : c){
            
             sum-=i;
            cnt++;
            if( sum <=0) return cnt;

        }
        return 0;
    }
};