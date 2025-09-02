class Solution {
public:
    int waysToSplitArray(vector<int>& a) {
        int i,cnt=0;
        long long left_sum=0,right_sum=a[0];
        for(i=1;i<a.size();i++){
            left_sum+=a[i];
        }
        for(i=1;i<a.size();i++){
           if(right_sum>=left_sum) cnt++;
           left_sum-=a[i];
           right_sum+=a[i];
        }
        return cnt;
    }
};