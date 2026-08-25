class Solution {
    public:
        int is_prime( int x){
            if( x==1 || x==0  ) return 0;
            if( x==2  )return 1;
            else if ( x%2 ==0) return 0;
            for( int i=3;i*i<=x;i+=2){
                if( x%i ==0) return 0;
            }
            return 1;
        }
public:
    vector<int> closestPrimes(int l, int r) {
        vector<int>a;
        int s= l,e=r;
        for( int i=l;i<=r;i++){
            if(is_prime(i) ) a.push_back(i);
        }
        vector<int>res(2);
        res[0]=-1;
        res[1]=-1;
        int mins = INT_MAX;
        for( int i=1;i<a.size();i++){
            int dif = abs(a[i-1]-a[i]);
            if( dif < mins){
                mins = dif;
                res[0]=a[i-1];
                res[1]=a[i];
            }
            
        }
    return res;

    }
};