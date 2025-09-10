class Solution {
public:
    long long smallestNumber(long long num) {
        vector<int >a;
        long long k=num;
        int cnt=0;
        while(num){
            a.push_back(num%10);
            if( num%10 ==0) cnt++;
            num/=10;
        }
        if( k<0){
            sort(a.begin(),a.end());
        }else{
            sort(a.begin(),a.end());
        }
        long long res=0;
         for( int i:a) res=res*10+i;
        if( k<0){
            return res;
        }else{
            string l = to_string(res);
            string k;
            k+=l[0];
            while( cnt--) k+='0';
            k+=l.substr(1,l.size());
            res=0;
            for(auto& i: k) res=res*10+(i-'0');
            return res;
        }
    }
};