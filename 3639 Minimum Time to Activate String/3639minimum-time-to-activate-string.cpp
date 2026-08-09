class Solution {
public:
    bool fun( int m,vector<int>& order, int k,string& s){
        long long n = 1ll*(s.size()*(s.size()+1)/2);
        vector<bool>a(s.size(), false);
        for( int i=0;i<=m;i++){
            a[order[i]]=true;
        }
        long long invalid = 0;
        long long len = 0;
        for( int i=0;i<s.size();i++){
            if( a[i]){
                invalid+=(len*(len+1)/2);
                len =0;
            }else{
                len++;
            }
        }
        invalid+=len*(len + 1)/2;
        return (n -invalid)>=k;

    }
    int minTime(string s, vector<int>& order, int k) {
        int l =0;
        int h =order.size()-1;
        int ans =-1;
        while(l<=h){
            int mid = (l+h)/2;
            if(fun(mid,  order, k, s)){
                ans = mid;
                h = mid-1;
            }else{
                l = mid+1;
            }
        }
        return ans;
        
    }
};