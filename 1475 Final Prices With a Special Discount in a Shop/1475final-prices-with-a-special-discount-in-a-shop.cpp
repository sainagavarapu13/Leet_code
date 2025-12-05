class Solution {
public:
    vector<int> finalPrices(vector<int>& a) {
        vector<int>b;
        
        for( int i=0;i<a.size()-1;i++){
            int f=0;
            for( int j = i+1;j<a.size();j++){
                if( a[i] >=a[j]){
                    b.push_back(a[i]-a[j]);
                    f=1;
                break;}
            }
            if( f==0){
                b.push_back(a[i]);
            }
        }
        b.push_back(a.back());
        return b;
    }
};