class Solution {
public:
    int maxArea(vector<int>& a) {
        int m=-1;
        int start=0,end=a.size()-1;
        while(start<end){
            int l=end-start;
            int b=min(a[start],a[end]);
            m=max(m,l*b);
            if(a[start]<a[end]){
                start++;
            }
            else end--;
        }
        return m;
    }
};