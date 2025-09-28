class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        int len = (n == 0) ? 1 : (int)log10(n) + 1;
        vector<int> a;
        int i = len - 1;
        long long  l = 1;
        while (n) {
            if( n%10 !=0){
            a.push_back((n % 10) * l);}
            l *= 10;
            n /= 10;
        }
        reverse(a.begin(),a.end());
        return a;
    }
};
