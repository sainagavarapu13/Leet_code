class Solution {
public:
    int search(vector<int>& a, int k) {
        int start=0,end=a.size()-1;
        while(start<=end){
            int mid = (start+end)/2;
            if(a[mid]==k){
                return mid;
            }
           else if(a[end]>a[mid]){
            if(k>a[mid]&& k <= a[end]) start=mid+1;
            else end=mid-1; 
           }
           else{
            if(k>=a[start]&&k<a[mid]){
                
                end=mid-1;
            } 
            else{
                start=mid+1;
            }
           }
        }
        return -1;
    }
};