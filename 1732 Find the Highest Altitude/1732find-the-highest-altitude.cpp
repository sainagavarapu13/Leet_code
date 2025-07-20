class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>r;
        int l =1;
        r.push_back(0);
        for( int i=0;i<gain.size();i++){
            r.push_back(gain[i]+r[i]);
        }
        sort(r.begin(),r.end(),greater<int>());
        return r[0];
        
    }
};