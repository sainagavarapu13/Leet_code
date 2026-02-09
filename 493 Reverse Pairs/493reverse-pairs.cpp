class Solution {
public:
    int ans = 0;

    void mergeSort(vector<pair<int,int>>& a ,int start ,int mid,int end){

        int s1 = start;
        int e1 = mid;
        int s2 = mid+1;
        int e2 = end;

       
        int j = s2;
        for(int i=s1;i<=e1;i++){
            while(j<=e2 && a[i].first > 1LL*2*a[j].first)
                j++;
            ans += (j - s2);
        }

        vector<pair<int,int>> b(end-start+1);
        int k=0;
        int i=s1;
        j=s2;

        while(i<=e1 && j<=e2){
            if(a[i].first <= a[j].first)
                b[k++] = a[i++];
            else
                b[k++] = a[j++];
        }

        while(i<=e1) b[k++] = a[i++];
        while(j<=e2) b[k++] = a[j++];

        k=0;
        for(int p=start;p<=end;p++)
            a[p]=b[k++];
    }

    void merge(vector<pair<int,int>>&a , int start , int end){
        if(start>=end) return;

        int mid = (start+end)/2;
        merge(a,start , mid);
        merge(a,mid+1 , end);
        mergeSort(a,start,mid,end);
    }

    int reversePairs(vector<int>& a) {
        int n=a.size();
        ans=0;

        vector<pair<int,int>> p(n);
        for(int i=0;i<n;i++)
            p[i] = {a[i], i};

        merge(p,0,n-1);
        return ans;
    }
};
