class Solution {
public:
    int countMajoritySubarrays(vector<int>& a, int k) {
        int sub=0;
        for( int i=0;i<a.size();i++){
            int cnt=0;
            for( int j =i;j<a.size();j++){
                if( a[j]==k) cnt++;
                if( cnt > (j-i+1)/2)sub++;
                
            }
        }
        return sub;
    }
};