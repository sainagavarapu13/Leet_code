class Solution {
public:
    int maxVowels(string a, int k) {
        int cnt=0;
        int ans =0;
        set<char>s;
        s = {'a','e','i','o','u'};
        int j=0,i=0;
        while( j<a.size()){
            if( s.count(a[j])) cnt++;
            if( j-i+1 <k){
                j++;
            }else{
                ans = max( ans , cnt);
                if( s.count(a[i])) cnt--;
                i++;
                j++;
            }
        }
        return ans;
    }
};