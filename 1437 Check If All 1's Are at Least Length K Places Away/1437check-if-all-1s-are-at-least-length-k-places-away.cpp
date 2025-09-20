class Solution {
public:
    bool kLengthApart(vector<int>& a, int k) {
        bool fl = true;
        vector<int>b;
        for( int i=0;i<a.size();i++){
            if( fl && a[i]==1){
                b.push_back(i);
                fl = false;
            }else if( !fl && a[i]==1 ){
                if( i-b.back()-1 < k)return 0;
                b.push_back(i);
            }
            }
        
        return 1;
    }
};