class Solution {
public:
    int mostFrequent(vector<int>& n, int k) {
        map <int ,int>a;
        for( int i=0;i<n.size()-1;i++){
            if( n[i]== k){
                a[n[i+1]]++;
            }
        }
        int maxi =0;
        int res=0;
        for( auto& [n,f]:a){
            if( maxi < f ){
                res =n;
                maxi = f;
            }
        }
        return res;
    }
};