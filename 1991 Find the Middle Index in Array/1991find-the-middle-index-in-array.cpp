class Solution {
public:
    int findMiddleIndex(vector<int>& a) {
        int i,right_sum=0,left_sum=0;
        for(i=0;i<a.size();i++){
           right_sum+=a[i];
        }
        for(i=0;i<a.size();i++){
            if(left_sum==right_sum-a[i]){
                return i;
            }
            left_sum+=a[i];
            right_sum=right_sum-a[i];
        }
return -1;
    }
};