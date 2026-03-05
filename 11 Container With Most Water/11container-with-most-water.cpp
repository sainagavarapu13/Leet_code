class Solution {
public:
    int maxArea(vector<int>& a) {
        int start=0,end=a.size()-1;
        int maxi=0;
        while(start<end){
            int len = end-start;
            int bre = min(a[start],a[end]);
            int area=len*bre;
            maxi=max(maxi,area);
            if(a[start]>a[end]){
                end--;
            }
            else{
                start++;
            }
        }
        return maxi;
    }
};