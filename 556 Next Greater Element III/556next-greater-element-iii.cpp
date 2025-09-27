class Solution {
public:
    int nextGreaterElement(int n) {
        vector<int>a;
        int m=n;
        long long N=0;
        while(n){
            a.push_back(n%10);
            n/=10;
        }
        reverse(a.begin(),a.end());
        int j=a.size()-2;
        while(j>=0&&a[j]>=a[j+1]) j--;
        if(j>=0){
            int i=a.size()-1;
            while(a[i]<=a[j]){
                i--;
            }
            swap(a[i],a[j]);
        }
        else return -1;
        reverse(a.begin()+j+1,a.end());
        for(int i=0;i<a.size();i++){
            N=N*10+a[i];
            if(N>INT_MAX) return -1;
        }
        if(m>=N) return -1;
        return N;
    }
};