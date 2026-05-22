class Solution {
public:
    unordered_map<int,int> m;
     void mer_a( int s , int e , int mid,vector<pair<int, int>>& a){
        int s1=s , s2=mid+1;
        int i = s, e1 = mid, j =mid+1,e2 = e;
        int k=0;
        vector<pair<int,int>>b;
        while (i <= mid && j <= e) {
            if (a[i].first <= a[j].first) {
                b.push_back(a[j++]);
               
            }
            else {
                 m[a[i].second] += (e2 - j + 1);
                b.push_back(a[i++]);
            }
        }
        while( i<=e1){
            b.push_back(a[i++]);
        }
        while( j <= e2){
       b.push_back(a[j++]);
        }
        k=0;
        for( int i=s1;i<=e;i++){
            a[i]=b[k++];
        }
     }
    void merge(int s, int e,vector<pair<int,int>>& a ){
        if( s>=e) return;
        int mid = (s+e)/2;
        merge( s,mid,a);
        merge( mid+1,e,a);
        mer_a(s,e,mid,a);
    }
    vector<int> countSmaller(vector<int>& a) {
        vector<pair<int, int>>as;
        for(int i=0;i<a.size();i++){
           as.push_back({a[i],i});
        }
        merge(0, a.size()-1,as );
        vector<int>b(a.size(),0);
        for(auto [x,y] : as){
            b[y] = m[y];
        }
        return b;
    }
};