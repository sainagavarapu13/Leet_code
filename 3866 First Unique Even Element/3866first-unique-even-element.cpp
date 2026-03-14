class Solution {
public:
    int firstUniqueEven(vector<int>& a) {
      unordered_map<int,int>m;
        for( int i=0;i<a.size();i++){
            m[a[i]]++;
        }
        int cnt=0;
        for( int x:a){
            if( x%2==0 && m[x]==1) return x;
        }
     return -1;
    }
};