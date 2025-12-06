class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m;
        map<int,int>n;
        vector<int> v;
        for(int i=0;i<nums1.size();i++){
            m[nums1[i]]++;
        }
        for(int j=0;j<nums2.size();j++){
            n[nums2[j]]++;
            if(m[nums2[j]]>=n[nums2[j]]){
                v.push_back(nums2[j]);
            }
        }
        return v;
    }
};