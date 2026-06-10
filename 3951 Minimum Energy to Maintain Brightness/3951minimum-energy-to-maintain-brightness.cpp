class Solution {
public:
    long long minEnergy(int n, int brightness, vector<vector<int>>& a) {
     long long l = (brightness+2)/3;   
        sort(a.begin(),a.end());
        int start=a[0][0],end=a[0][1];
        long long sum=0;
        for(int i=1;i<a.size();i++){
            int pre_s = a[i][0];
            int pre_e = a[i][1];
            if(pre_s<=end){
                end = max(end,pre_e);
            }
            else{
                sum+=end-start+1;
                start=pre_s;
                end=pre_e;
            }
        }
         sum+=end-start+1;
        return sum*l;
    }
};