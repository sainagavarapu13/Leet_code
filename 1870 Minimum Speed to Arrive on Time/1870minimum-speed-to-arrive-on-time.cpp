class Solution {
public:
    bool canGo(vector<int>a , double h ,int k){
        double time =0.0;
        for(int i=0;i<a.size()-1;i++){
            time +=ceil(((double)a[i]/k));
            if(time>h) return false;
        }
         time += (double)a.back() / k;
        if(time<=h) return true;
        else return false;
    }
    int minSpeedOnTime(vector<int>& a, double h) {
        int start = 1 , end = 1e7;

        while(start<end){
            int mid = (start+end)/2;
            if(canGo(a,h,mid)){
                end = mid;
            }
            else {
                start = mid+1;
            }
        }
         return canGo(a, h, start) ? start : -1;
    }
};