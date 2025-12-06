class Solution {
public:
    long long maxPoints(vector<int>& t1, vector<int>& t2, int k) {
        int n = t1.size();
        vector<int> v(n);
        for(int i=0;i<n;i++){
            v[i] = t2[i] - t1[i];
        }
        vector<int> i(n);
        iota(i.begin(),i.end(),0);
        sort(i.begin(),i.end(),[&](int a,int b){
            return v[a] > v[b];
        });
        long long a=0;
        for(int x : t1){
            a +=x;
        }
        int max = n-k;
        for(int j=0;j<max;j++){
            int b = i[j];
            if(v[b]>0){
                a += v[b];
            }
            else{
                break;
            }
        }
        return a;
    }
};