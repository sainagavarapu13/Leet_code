class Solution {
public:
int ans=0;
    void fun(vector<int>& a,map<int,int>& m, vector<int>& b){
        if(b.size()==a.size()){
            ans++;
            return;
        }
        for( auto &it : m){
            int i = it.first;
            if( !m[i]) continue;
            if(!b.empty()){
            int n = i+b.back();
            int r = sqrt(n);
            if(r*r!=n) continue;}
            m[i]--;
            b.push_back(i);
        
            fun( a,m,b);
            b.pop_back();
            m[i]++;
        }
    }
    int numSquarefulPerms(vector<int>& a) {

        bool same = true;
        for(int i=1;i<a.size();i++)
        if(a[i]!=a[0]) same=false;
        if(same){
            int n = sqrt(a[0]);
            if( n*n==a[0]) return 0;
            else return 1;
}
        map<int ,int>m;
        for( int i : a){
            m[i]++;
        }
        vector<int>b;
        fun( a,m,b);
        return ans;

    }
};