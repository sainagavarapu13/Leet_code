class Solution {
public:
    vector<int> plusOne(vector<int>& a) {
        vector<int>b;
        for( int i = a.size()-1;i>=0;i--){
            b.push_back(a[i]);
        }
        int n = b.size()-1;
        b[0]+=1;
        for( int i=1;i<b.size();i++){
            b[i]+=b[i-1]/10;
            b[i-1]%=10;
        }
        if( b[n]/10 !=0){
            b.push_back(b[n]/10);
            b[n]%=10;
        }
        reverse(b.begin(),b.end());
        return b;
    }
};