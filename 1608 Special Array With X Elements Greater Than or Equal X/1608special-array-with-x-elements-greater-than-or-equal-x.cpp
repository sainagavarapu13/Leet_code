class Solution {
public:
    int specialArray(vector<int>& a) {
        sort(a.begin(),a.end());
        int start = 0,end = a.size();
        while(start<=end){
            int mid = (start+end)/2;
            auto it = lower_bound(a.begin(),a.end(),mid);
            int idx = it - a.begin();
            int rem = a.size()-idx;
            if(rem == mid) return mid;
            else if (rem>mid){
                start = mid+1;
            }
            else end = mid -1;
        }
        return -1;
    }
};