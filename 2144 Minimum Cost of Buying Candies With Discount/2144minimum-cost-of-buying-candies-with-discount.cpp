class Solution {
public:
    int minimumCost(vector<int>& a) {
        sort( a.begin() , a.end());
        int s=0;
        int total =0;
        int n = a.size();
        for( int i= a.size()-1;i>=0;i--){
             if ((n - i) % 3 != 0) {
                total+= a[i];
            }
        }
        
        return total;
    }
};