class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        for( int i : nums ){
            m[i]++;
        }
        int n = (int)nums.size()/2;
        int cnt=0 , num=0;
        for( auto [x,y] : m){
            if( y>n){
               if(cnt<y) {num = x; cnt=y;}
            }
        }
        return num;
    }
};