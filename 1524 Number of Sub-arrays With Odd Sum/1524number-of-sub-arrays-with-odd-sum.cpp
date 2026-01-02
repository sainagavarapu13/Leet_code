class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int a = 0,b=0,n = arr.size(),c=0;
        long long d = 1000000007,s=0;
        vector<int> p(n+1,0);
        p[0] = 0;
        for(int i=0;i<arr.size();i++){
            p[i+1] = p[i]+arr[i];
            if(arr[i]%2!=0){
                c++;
            }
        }
        if(c==0){
            return 0;
        }
        c = 0;
        for(int i=0;i<p.size();i++){
            if(p[i]%2!=0) c++;
            if(p[i]%2==0){
                a++;
                if(c>0) s += b;
            }
            else{
                b++;
                if(c>0) s += a;
            }
            s%=d;
        }
        int res = s;
        //cout<<res<<" "<<s<<endl;
        return res;
    }
};