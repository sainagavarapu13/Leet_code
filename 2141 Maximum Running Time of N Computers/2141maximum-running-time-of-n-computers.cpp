class Solution {
public:
    long long maxRunTime(int n, vector<int>& v) {
        long long a = 0;
        for(long long i=0;i<v.size();i++){
            a = a + v[i];
        }
        sort(v.begin(),v.end());
        long long b = v.size();
        for(long long i=b-1;i>=0;i--){
            if(v[i]>a/n){
                a -=v[i];
                n--;
            }
            else{
                break;
            }
        }
        return a/n;
    }
};