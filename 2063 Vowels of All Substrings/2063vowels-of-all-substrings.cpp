class Solution {
public:
    long long countVowels(string a) {
        long long cnt=0;
        int n =a.size();
        set<char> s = { 'a','e','i','o','u'};
        for( int i=0;i<a.size();i++){
            if( s.count(a[i])){
                cnt+=(long long)(i+1)*(long long)(n-i);
            }
        }
        return cnt;
    }
};