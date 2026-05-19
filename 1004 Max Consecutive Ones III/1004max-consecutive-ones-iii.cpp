class Solution {
public:
    int longestOnes(vector<int>& a, int k) {
        int start=0,end=0;
        int m=k;
        int ans=0;
        while(end<a.size()){
           if(a[end]==0){
                m--;
            }
            while(m<0){
                if(a[start]==0){
                    m++;
                }
                start++;
            }
            ans=max(ans,end-start+1);
            end++;
        }
        return ans;
    }
};