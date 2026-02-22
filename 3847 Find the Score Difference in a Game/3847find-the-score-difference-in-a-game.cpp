class Solution {
public:
    int scoreDifference(vector<int>& a) {
        int first = 1,second=0;
        int f_sum=0,s_sum=0;
        for(int i=0;i<a.size();i++){
            if(a[i]%2==1 ){
                first= 1-first;
                second = 1-second;
            }
            if( (i+1)%6==0){
                first= 1-first;
                second = 1-second;
            }
            if(first==1){
                f_sum+=a[i];
            }
            else {
                s_sum+=a[i];
            }
        }
        return f_sum-s_sum;
    }
};