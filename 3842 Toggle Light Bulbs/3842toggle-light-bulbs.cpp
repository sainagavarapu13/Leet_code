class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int>a(101,0);
        for( int i : bulbs){
            a[i]++;
        }
        vector<int>ans;
        for( int x=0;x<a.size();x++){
            if( a[x]%2==1) ans.push_back(x);
        }
        return ans;
    }
};