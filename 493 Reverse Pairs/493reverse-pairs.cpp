class Solution {
public:
    int ans=0;
     void mer_a( int s , int e , int mid,vector<int>& a){
        int s1=s , s2=mid+1;
        int i = s, e1 = mid, j =mid+1,e2 = e;
        int k=0;
        vector<int>b(e2-i+1);
          while (i <= mid && j <= e) {
            if ((long long)a[i] > 2LL * a[j]) {
                ans += (mid - i + 1);
                j++;
            } else {
                i++;
            }
        }
        i = s, e1 = mid, j =mid+1,e2 = e;
        while( i<=e1 && j<=e2){
            if( a[i]<a[j]) b[k++]=a[i++];
           
            else b[k++] = a[j++];
        }
        while( i<=e1){
             b[k++]=a[i++];
        }
        while( j <= e2){
            b[k++] = a[j++];
        }
         k=0;
        for( int i=s1;i<=e;i++){
            a[i]=b[k++];
        }
     }
    void merge(int s, int e,vector<int>& a ){
        if( s>=e) return;
        int mid = (s+e)/2;
        merge( s,mid,a);
        merge( mid+1,e,a);
        mer_a(s,e,mid,a);

    }
    int reversePairs(vector<int>& a) {
         merge(0, a.size()-1,a );
        return ans;
        
    }
};