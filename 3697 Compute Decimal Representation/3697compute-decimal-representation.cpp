class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        long long d=1;
        vector<int> v;
        while(n){
            long long b = n%10;
            if(b!=0){
                v.push_back(b*d);
            }
            n/=10;
            d *=10;
            
        }
        reverse(v.begin(),v.end());
        return v;
    }
};