class Solution {
public:
    int maximumBags(vector<int>& a, vector<int>& b, int rock) {
        vector<int>diff;
        for(int i=0;i<a.size();i++){
            diff.push_back(a[i]-b[i]);
        }
        int cnt=0;
        sort(diff.begin(),diff.end());
        for(int i=0;i<diff.size();i++){
            if(diff[i]==0) cnt++;
            else if(diff[i]<=rock){
                cnt++;
                rock=rock-diff[i];
            }
        }

       
        return cnt;
    }
};