class Solution {
public:
    int countGoodRotations(vector<int>& a) {
        long long t=0;
        for( int i : a){
            t+=i;
        }
        int h = a.size()/2;
        long long f=0;
        for( int i=0;i<h;i++) f+=a[i];
        int n = a.size();
        int ans=0;
        for( int i=0;i<a.size();i++){
            if(2*f > t) ans++;
            f-=a[i];
            f+=a[(i+h)%n];
        }
        return ans;
    }
};