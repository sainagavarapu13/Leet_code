class Solution {
public:
    vector<int> topStudents(vector<string>& pi, vector<string>& ni, vector<string>& r, vector<int>& s, int k) {
        unordered_set<string>p(pi.begin(),pi.end());
        unordered_set<string>n(ni.begin(),ni.end());
    
       unordered_map<int, int>m;
       for( int i : s) m[i]=0;
        for(int i=0;i<s.size();i++ ){
             stringstream ss(r[i]);
             string o;
             while(ss >> o){
                if(p.count(o)) m[s[i]]+=3;
                if(n.count(o)) m[s[i]]-=1;
            }
        }
        vector<vector<int>>res;
        for( auto [ x,y]:m){
            res.push_back({x,y});
        }
        sort( res.begin(), res.end(),[](auto x, auto y){
            if( x[1]==y[1]) return x[0]<y[0];
           else return x[1]>y[1];
        });
        vector<int>ans;

        for( int i=0;i<min(k,(int)res.size());i++){
            ans.push_back(res[i][0]);
        }
        return ans;
    }
};