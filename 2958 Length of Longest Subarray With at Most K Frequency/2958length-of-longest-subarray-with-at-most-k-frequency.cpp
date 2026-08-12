class Solution {
public:
    int maxSubarrayLength(vector<int>& a, int k) {
        map<long long , int>m;
        int start =0,end=0,maxi=0;
        while(end<a.size()){
            m[a[end]]++;
            while(m[a[end]]>k){
                
                m[a[start]]--;
                start++;
            }
            maxi=max(maxi,end-start+1);
            end++;
        }
        return maxi;
    }
};