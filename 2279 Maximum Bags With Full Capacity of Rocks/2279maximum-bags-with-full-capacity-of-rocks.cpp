class Solution {
public:
    int maximumBags(vector<int>& a, vector<int>& b, int add) {
        vector<int>c;
        int cnt=0;
        for( int i=0;i<a.size();i++){
            if( a[i]-b[i]!=0){
            c.push_back(a[i]-b[i]);}
            else cnt++;
        }
        sort( c.begin(),c.end());
        for( auto& i : c){
            if( add >= i){
                cnt++;
                add-=i;
            }
        }

        return cnt;
    }
};