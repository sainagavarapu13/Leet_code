class Solution {
public:
    int longestMountain(vector<int>& a) {
        int st = -1;
        int maxi = 0;
        int i=1;
        while(i<a.size()){
            if(st==-1&&a[i]>a[i-1]){
                st=i-1;
            }
            else if(a[i]<a[i-1]&&st!=-1){
                while(i<a.size()&&a[i]<a[i-1]){
                    i++;
                }
                maxi = max(maxi,i-st);
                i--;
                st=-1;
            }
           else if(a[i]==a[i-1]){
            st=-1;
           }
            i++;
        }
        return maxi;
    }
};