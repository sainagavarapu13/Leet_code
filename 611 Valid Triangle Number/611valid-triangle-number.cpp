class Solution {
public:
    int triangleNumber(vector<int>& n) {
        sort( n.begin(),n.end());
        int cnt=0;
        for( int i=n.size()-1;i>=0;i--){
            int l=0 , r= i-1;
            while( l<r){
                if( n[l]+n[r]>n[i]){
                    cnt+=r-l;
                    r--;
                }else l++;
            }

        }
        return cnt;
    }
};