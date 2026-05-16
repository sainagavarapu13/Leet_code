class Solution {
public:
    int maxProfit(vector<int>& a) {
        // vector<int>p(a.size());
        // p[a.size()-1]=0;
        // for( int i=a.size()-2;i>=0;i--){
        //     p[i] = max(a[i+1],p[i+1]);
        // }
        // // for( int i=0;i<a.size();i++){
        // //     cout << a[i] << " " << p[i] << endl;
        // // }
        // int m =0;
        // for( int i=0;i<a.size();i++){
            
        //     m = max( m , p[i]-a[i]);

        // }
        // return m;

        int max_p =0, m=INT_MAX;
        for( int i=0;i<a.size();i++){
            m = min( m , a[i]);
            max_p = max( a[i]-m , max_p);
        }
    return max_p;
    }
};

































