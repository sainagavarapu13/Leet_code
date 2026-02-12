class Solution {
public:
int fun( vector<int>& a){
    vector<int>x,y;
    int sum=0;

    for( int i : a){
            sum+=i;
            if( i%3==1) x.push_back(i);
            else if(i%3==2 ) y.push_back(i);
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    if( sum %3==0) return sum;
    if( sum%3==1){
        sum-=min((x.size()>=1?x[0]:INT_MAX),(y.size()>=2?y[0]+y[1]:INT_MAX));
    }  if( sum%3==2){
        sum-=min((y.size()>=1?y[0]:INT_MAX),(x.size()>=2?x[0]+x[1]:INT_MAX));
    }
    return sum<=0?0:sum;
}
    int maxSumDivThree(vector<int>& nums) {
        return fun( nums);

    }
};