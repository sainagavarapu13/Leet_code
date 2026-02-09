class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m;
        for(int i=0;i<nums2.size();i++){
            m[nums2[i]] = i;
        }
        for(int j=0;j<nums1.size();j++){
            int a = m[nums1[j]];
            int b = -1;
            for(int k = a;k<nums2.size();k++){
                if(nums2[k]>nums1[j]){
                    nums1[j] = nums2[k];
                    b = k;
                    break;
                }
            }
            if(b==-1) nums1[j] = b;
        }
        return nums1;
    }
};