class Solution {
public:
    bool fun(vector<int>& a , int val,int days){
        int cnt=0;
        int sum=0;
        for( int i:a){
            sum+=i;
            if( sum>val){
                sum=0;
                sum+=i;
                cnt++;
            }
        }
        return (cnt <days);
    }
    int shipWithinDays(vector<int>& a, int days) {
        int start = *max_element(a.begin(),a.end());
        int end=0;
        for( int i:a){
            end+=i;
        }
        while(start < end){
            int mid = start+(end-start)/2;
            if(!fun(a,mid,days)){
                start = mid+1;
            }
            else if(fun(a,mid,days)){
                end =mid;
            }
        }
        return start;
    }
};