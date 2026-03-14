class Solution {
public:
    int minCost(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> m,n,t;
        int a = nums1.size();
        for(int i=0;i<a;i++){
            m[nums1[i]]++;
            n[nums2[i]]++;
            t[nums1[i]]++;
                t[nums2[i]]++;
        }
        int res = 0;
        for(auto x:t){
            if((x.second)%2!=0) return -1;
        }
        for(auto x:t){
            int b = x.second/2;
            if(m[x.first]>b){
                res += m[x.first] - b;
            }
        }
        return res;
    }
};