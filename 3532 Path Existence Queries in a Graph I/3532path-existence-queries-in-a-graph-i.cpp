class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& a, int m, vector<vector<int>>& q) {
        vector<int>c(n);
        int id =0;
        c[0]=id;
        for(int i=1;i<n;i++){
                if( a[i]-a[i-1]>m) id++;
                c[i]=id;
        }
        vector<bool>ans;
        for( auto i : q){
            ans.push_back((c[i[0]]==c[i[1]]));
        }
        return ans;
    }
};