class Solution {
public:
    bool Prime( long long a){
        if( a<2) return 0;
        for( long long i=2;i*i<=a;i++){
            if( a%i==0) return 0;
        }
        return 1;
    }
    long long sumOfLargestPrimes(string s) {
        set<long long>si;
        for( int i =0;i<s.size();i++){
            long long temp=0;
            for( int j =i;j<s.size();j++){
                if( temp > LLONG_MAX/10) break;   // overflow protection
                temp = temp*10+(s[j]-'0');
                if( Prime(temp)){
                    si.insert(temp);
                }
            }
        }
        vector<long long>p(si.begin(),si.end());
        sort(p.begin(),p.end());
        int n = p.size();
        if( n==0) return 0;
        else if( n==1) return p[n-1];
        else if( n==2) return p[n-1]+p[n-2];
        else return p[n-1]+p[n-2]+p[n-3];
    }
};