class Solution {
public:
    vector<int> relocateMarbles(vector<int>& a, vector<int>& b, vector<int>& c) {
        unordered_map<int,int>m;
        for(int i=b.size()-1;i>=0;i--){
            if(m.find(c[i])==m.end()){
            m[b[i]] = c[i];}
            else{
                m[b[i]] = m[c[i]];
            }
        }
     
        for(int i=0;i<a.size();i++){
            if(m.find(a[i])!=m.end())
            a[i] = m[a[i]];
        }
      
        set<int>set(a.begin(),a.end());
        vector<int>an(set.begin(),set.end());
        return an;
      
    }
};