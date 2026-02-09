class Solution {
public:
vector<int>ans;
    void mergeSort( vector<pair<int,int>>&a ,int start ,int mid,int end){
        int s1 = start;
        int i=s1;

        int cnt=0;
        int e1 = mid;
        int s2 = mid+1;
        int j=s2;
        int e2 = end;
        vector<pair<int,int>>b(end-start+1);
        int k =0;
        while(s1 <= mid && s2<=e2){
            if(a[s1].first>a[s2].first){
                b[k++] = a[s2++];
                cnt++;
                
            }
            else{
                     ans[a[s1].second]+=cnt;
                b[k++] =a[s1++];
           
            }     
        }
    while (s1 <= mid){
         
         ans[a[s1].second]+=cnt;
         b[k++] = a[s1++];
    }
while (s2 <= e2){
    b[k++] = a[s2++];
   
      }
        k=0;
        for(int p=i;p<=end;p++){
            a[p]=b[k++];
        }
      
    }
    void merge( vector<pair<int,int>>&a , int start , int end){
        if(start>=end) return;
      
            int mid = (start+end)/2;
            merge(a,start , mid);
            merge(a,mid+1 , end);
            mergeSort(a,start,mid,end);
        
    }
    vector<int> countSmaller(vector<int>& a) {
        int n=a.size();
        ans.assign(n,0);
        vector<pair<int,int>>p(n);
        for(int i=0;i<n;i++)
            p[i] = {a[i], i};
        merge(p,0,n-1);
        
        return ans;
    }
};