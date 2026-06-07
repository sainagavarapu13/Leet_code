class Solution {
public:
        vector<string>ans;
    int n ,k;
        void fun(int i , bool pre , int c, string & b){
            if( c > k) return ;
            if( i == n){
                ans.push_back(b);
                return ;
            }
            b.push_back('0');
            fun( i+1, false, c, b);
            b.pop_back();
            if( !pre){
                b.push_back('1');
                fun( i+1, true, c+i, b);
                b.pop_back();
                
            }
        }
    vector<string> generateValidStrings(int n_, int k_) {
        n = n_;
        k= k_;
        string b;
        
        fun( 0,false, 0, b);
        return ans;
    }
};