class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> v(m),u(queries.size());
        for(int i=0;i<m;i++){
            v[i]=i+1;
        }
        int n = queries.size();
        for(int i=0;i<n;i++){
            int a = queries[i],b=0;
            for(int j=0;j<m;j++){
                if(a==v[j]){
                    b = j;
                    u[i] = j;
                }
            }
            for(int k=b;k>0;k--){
                v[k] = v[k-1];
            }
            v[0] = a;
        }
        return u;
    }
};