class Solution {
public:
    bool isTrionic(vector<int>& a) {
        int i=0;
        int n=a.size();
        while(i<n-1&&a[i]<a[i+1]){
            i++;
        }
        if(i==0||i==n-1) return false;
        int j=i;
        while(j<n-1&&a[j]>a[j+1]){
            j++;
        }
        if(j==i||j==n-1) return false;
        while(j<n-1&&a[j]<a[j+1]){
            j++;
        }
        if(j==n-1) return true;
        else return false;
    }
};