class Solution {
public:
int ans;
    void mergepartion( int s, int m, int e, vector<long long>&a, int l , int u){
        int s1 = s, e1 = m;
        int s2 = m+1 , e2 = e;
        int j=s2 , k = s2;
    for( int i=s1;i<=m;i++){
        while( j<=e2&& a[j]-a[i]<l) j++;
         while( k<=e2 && a[k]-a[i]<=u)k++;
         ans+=(k-j);
    }
    int i=s1;
    j = s2;
    vector<long long>b;
    while( i<=m && j <=e2){
        if( a[i]>a[j]){
            b.push_back(a[j++]);
        }else{
            b.push_back(a[i++]);
        }
    }
    while( i<=m) b.push_back(a[i++]);
    while( j<=e2)  b.push_back(a[j++]);
    k=0;
    for( int i=s;i<=e;i++){
        a[i]= b[k++];
    }
    }
    void merge( int s, int e , vector<long long>&a ,int l , int u){
        if( s>=e) return;
        int mid = ( s+e)/2;
        merge( s, mid, a, l,u);
        merge( mid+1 , e, a, l, u);
        mergepartion(s, mid, e, a, l,u);
    }
    int countRangeSum(vector<int>& a, int l, int u) {
        ans=0;
        vector<long long>pre(a.size()+1,0);
        pre[0]=0;
        for( int i=1;i<=a.size();i++ ){
            pre[i]= pre[i-1]+a[i-1];
        }
        merge(0,pre.size()-1,pre,l,u);
        return ans;

    }
};