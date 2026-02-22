class Solution {
public:
    bool fun(vector<int>& a ,int k){
        bool f = true;
        long long op = 1ll*k*k;
        for( int i=0;i<a.size();i++){
            long long need = (a[i]+k-1)/k; 
            op -= need;
            if(op<0){
                f=false;
                break;
            }
        } return f;
    }
    int minimumK(vector<int>& a) {
        int h = max((int)a.size(),*max_element( a.begin(),a.end()));
        int l =1;
        while( l<h){
            int mid = (l+h)/2;
            if( fun(a, mid)){
                h =mid;
            }else l =mid+1;
        }
        return l;
    }
};